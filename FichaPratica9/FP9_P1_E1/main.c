#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "funcoes.h"


int main() {

    logMsg(LINE, LOG_FILE);
    logMsg("Inciando o programa", LOG_FILE);

    int cont = 0;
    
    fichaaluno alunos[MAX_ALUNOS];
    
    menu(alunos, &cont);

    logMsg("Finalizando o programa", LOG_FILE);
    logMsg(LINE, LOG_FILE);
    
    return 0;
}

