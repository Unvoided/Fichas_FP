#include <stdio.h>

int main() {

    int linha, coluna, maior = 0, tabela[3][3];

    printf("\n");

    // Input para matrix
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("\tValor para %dº Linha %dº Coluna: ", linha+1, coluna+1);
            scanf("%d", &tabela[linha][coluna]);
        }
    }

    printf("\n");

    // Mostrar Matrix
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("%d  ", tabela[linha][coluna]);
        }
        printf("\n");
    }

    // Comparar Maior e Menor
    // Variavel Inicial
    int menor = tabela[0][0];

    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            if (tabela[linha][coluna] > maior) {maior = tabela[linha][coluna];}
            if (tabela[linha][coluna] < menor) {menor = tabela[linha][coluna];}
        }
    }

    printf("\n\t[+] O Maior Valor é '%d' e o Menor Valor é %d", maior, menor);
    
    return 0;
}

