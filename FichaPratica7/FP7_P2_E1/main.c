#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"


int main() {
    
    livro livros[MAX_LIVROS];
    int cont = 0;
    
    menu(livros, &cont);
    
    return 0;
}

