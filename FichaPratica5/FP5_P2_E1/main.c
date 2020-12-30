/*
Altere a função do exercício 1 de modo a validar o intervalo de valores permitido. A função deve
receber dois parâmetros que identifiquem o intervalo de valores permitidos. Acrescente a função
ao módulo (myIntLib). Teste a implementação.
 */


#include <stdio.h>
#include "myIntLib.h"

int main() {
    
    int input = lerValor();

    printAsterisks(input);

    return 0;
}

