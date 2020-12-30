#include <stdio.h>

int main() {
    
    int num, soma = 0, divisao = 0;
    float media;
    
    do {
        
        printf("Insira um número: ");
        scanf(" %d", &num);
        
                
        divisao++;
        soma = soma + num;
        
    } while (num != 0);
    
    media = (float) (soma / --divisao);
    printf("A média dos números inseridos é: %f", media);

        
    return (0);
}

