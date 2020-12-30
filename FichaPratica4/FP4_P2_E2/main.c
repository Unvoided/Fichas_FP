#include <stdio.h>

int main() {
    
    int TAM_ARRAY, i, numero = 2, fator = 1, divisores = 0;
    
    printf("Insira a quantidade de números primos a apresentar: ");
    scanf("%d", &TAM_ARRAY);
    
    int array[TAM_ARRAY];
    
    for(i = 0; i < TAM_ARRAY; i++) {
        
        for (fator = 1; fator <= numero; fator++) {
            if (numero % fator == 0) {
                divisores++;
            }
        }


        if (divisores == 2) {
            array[i] = numero;
            numero++;
        } else {
            numero++;
            continue;
        }           

    }
    
    for(i = 0; i < TAM_ARRAY; i++) {
        printf("%d ", array[i]);
    }
    
    return 0;
}