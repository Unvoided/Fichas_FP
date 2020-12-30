#include <stdio.h>

void somar(int num1, int num2, long *resultado) {
    
    *resultado = num1 + num2;
    
}

int main() {
    
    int a, b;
    long resultado = 0;
    
    printf("Insira o 1º número: ");
    scanf("%d", &a);
    printf("Insira o 2º número: ");
    scanf("%d", &b);
    
    somar(a, b, &resultado);
    
    printf("Resultado da soma: %ld", resultado);
    
    return 0;
}

