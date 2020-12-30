#include <stdio.h>

int main() {
    char opcao;
    int n1, n2;

    printf("Insira o 1º número: ");
    scanf("%d", &n1);
    printf("Insira o 2º número: ");
    scanf("%d", &n2);


    printf("Insira a operação (+, -, *, /): ");
    scanf(" %c", &opcao);

    switch (opcao) {
        case '-':
            printf("O resultado da subtração é %d", n1 - n2);
            break;
        case '*':
            printf("O resultado da multiplicação é %d", n1 * n2);
            break;
        case '/':
            if (n2 != 0) {
                printf("O resultado da divisão é %lf", n1 / (double) n2);
            } else {
                printf("O divisor tem de ser diferente de 0.");
            }
            break;
        default: 
            printf("O resultado da soma é %d", n1 + n2);
            break;
    }

    return 0;
}