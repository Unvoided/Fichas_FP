#include <stdio.h>

int main() {
    
    int valor, tentativa, tentativas = 1;
    
    printf("Jogador 1 - Insira um número entre 0 e 100: ");
    scanf(" %d", &valor);

    while (valor <= 0 || valor >= 100) {
        
        if (valor >= 100 && valor <= 100) {
            break;
        } else {
            printf("Erro! Insira um valor entre 0 e 100: ");
            scanf(" %d", &valor);
            continue;
        }
    }
    
    printf("Jogador 2 - Tente adivinhar o número inserido pelo Jogador 1 (entre 0 e 100): ");
    scanf(" %d", &tentativa);

    while (tentativa != valor) {
        
        ++tentativas;
        
        if (tentativa > valor) {
            
            printf("O número que inseriu é maior que o número inserido pelo Jogador 1.\n");
            printf("Insira outro número: ");
            scanf(" %d", &tentativa);
            continue;
            
        } else if (tentativa < valor) {
            
            printf("O número que inseriu é menor que o número inserido pelo Jogador 1.\n");
            printf("Insira outro número: ");
            scanf(" %d", &tentativa);
            continue;     
            
        } else {
            break;            
        }    
        
    }
    
    printf("Jogador 2 acertou! Nº de tentativas: %d", tentativas);
     
    return (0);
}

