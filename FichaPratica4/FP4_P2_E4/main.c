#include <stdio.h>

int main() {
       
    int i, j, N;
    
    printf("Insira as dimensões da matriz quadrada: ");
    scanf("%d", &N);
    
    int matrizA[N][N];
    
     for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Valor para %dº Linha %dº Coluna: ", i+1, j+1);
            scanf("%d", &matrizA[i][j]);
        }
    }
    
    printf("\nEsta foi a matriz que inseriu: \n");
    
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d  ", matrizA[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatriz com rotação por 90 graus: \n");
    
    for (i = 0; i < N; i++) {
        for (j = (N - 1); j >= 0; j--) {
            printf("%d  ", matrizA[j][i]);
        }
        printf("\n");
    }

    return 0;
}

