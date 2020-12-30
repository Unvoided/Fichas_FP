#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"


int main() {

    int cont = 0;
    
    fichaaluno alunos[MAX_ALUNOS];
    
    menu(alunos, &cont);
    
    return 0;
}

