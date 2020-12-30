#include <stdio.h>
#include <stdlib.h>
#include "func.h"
#define SALARIO_DIA 40


int main(int argc, char** argv) {

    int mes[12];
    float VencimentoBase[12], SubsidioAlimentação[12] ,irs[12], total[12],SegurançaSocial[12], entidadePatronal[12];
    char cargo;
    inicio();
    
    
    getnFuncionario();
    getmes(mes);
    printmes(mes);
    cargo = menu();
    
    switch(cargo){
        case 'E':
            contasE(mes,VencimentoBase, SubsidioAlimentação, irs,total,SegurançaSocial,entidadePatronal);
        //case 'C':
        //case 'A':
            printresultado(mes, VencimentoBase, SubsidioAlimentação, irs, total, SegurançaSocial, entidadePatronal);
    }
    return (EXIT_SUCCESS);
}
