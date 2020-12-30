#include <stdio.h>

int main() {

    int numero, fator = 1, divisores = 0;

    printf("Insira um número: ", numero);
    scanf("%d", &numero);
    
    for (fator = 1; fator <= numero; fator++) {
       if (numero % fator == 0) {
           divisores++;
       } 
    }
    if (divisores == 2) {
        printf("O número é primo.");
    } else {
        printf("O número não é primo.");
    }

    return 0;
}
