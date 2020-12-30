/*
Implemente funções que, dadas 2 matrizes de inteiros com a mesma dimensão bem como a sua
dimensão, apresente (numa função) em forma de matriz o resultado da soma das 2 matrizes e
(noutra função) o somatório dos seus elementos.
 */

#include <stdio.h>
#define DIMENSAO 3

void apresentaSoma(int matriz1[DIMENSAO][DIMENSAO], int matriz2[DIMENSAO][DIMENSAO]) {
    int i, j;
    
    for(i = 0; i < DIMENSAO; i++) {
        puts("\n");
        for(j = 0; j < DIMENSAO; j++) {
            printf("%3d", matriz1[i][j]);
        }
    }
}

int somatorioElementos(int matriz1[DIMENSAO][DIMENSAO], int matriz2[DIMENSAO][DIMENSAO]) {
    int i,j, soma = 0;
    
    for(i = 0; i < DIMENSAO; i++) {
        for(j = 0; j < DIMENSAO; j++) {
            soma += matriz1[i][j] + matriz2[i][j];
        }
    }
    
    return soma;
}

int main() {
    int i, j, matriz1[DIMENSAO][DIMENSAO], matriz2[DIMENSAO][DIMENSAO];

    for(i = 0; i < DIMENSAO; i++) {
        for(j = 0; j < DIMENSAO; j++) {
            matriz1[i][j] = matriz2[i][j] = i + j;
        }
    }

    apresentaSoma(matriz1, matriz2);
    printf("\nSomatorio: %d", somatorioElementos(matriz1, matriz2));
    return 0;
}

