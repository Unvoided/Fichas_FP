/*
Acrescente ao módulo myIntLib duas funções que retornem o valor máximo e mínimo 
de dois valores inteiros passos como argumentos. Teste a implementação como 
valores lidos do utilizador. 
 */

#include <stdio.h>
#include <stdlib.h>
#include "myIntLib.h"

int main() {

    int i;
    int array[2];

    for (i = 0; i < 2; i++) {
        printf("\nInsira o %dº número: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nO maior número é: %d\n", getMax(array));
    printf("\nO menor número é: %d\n", getMin(array));

    return 0;
}

