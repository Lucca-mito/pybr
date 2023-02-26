#include "pycore_ast.h" // mod_ty

// TODO: Including C files is a bad idea.
#include "peg_api.c" // _PyParser_ASTFromString
#include "pythonrun.c" // run_mod

int main() {
    // TODO: Use _PyParser_ASTFromFile from Parser/peg_api.c instead.
    mod_ty mod = _PyParser_ASTFromFile();

    run_mod(mod, );
}