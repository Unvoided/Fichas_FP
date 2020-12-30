/*
Implemente um programa que solicite dois números inteiros ao utilizador e que permite depois ao
utilizador escolher entre 4 operações aritméticas: adição, subtração, multiplicação e divisão. Cada
uma dessas operações deve ser implementada através de uma função específica para esse
propósito. 
 */


#include <stdio.h>

int soma(int a, int b) {
    return a + b;   
}
int subtracao(int a, int b) {
    return a - b;   
}
int multiplicacao(int a, int b) {
    return a * b;   
}
float divisao(int a, int b) {
    return a / b;   
}


int main() {
    
    int n1, n2;
    char opcao;
    
    printf("Insira um número: ");
    scanf("%d", &n1);
    printf("Insira outro número: ");
    scanf("%d", &n2);
    
    printf("Insira a operação (+, -, *, /): ");
    scanf(" %c", &opcao);
    
    switch(opcao) {
        case '+':
            printf("O resultado da soma é: %d", soma(n1, n2));
            break;
        case '-':
            printf("O resultado da subtração é: %d", subtracao(n1, n2));
            break;
        case '*':
            printf("O resultado da multiplicação é: %d", multiplicacao(n1, n2));
            break;
        case '/':
            printf("O resultado da divisão é: %f", divisao(n1, n2));
            break;
        default:
            printf("Insira uma opção válida!");            
    }
    
    return 0;
}

