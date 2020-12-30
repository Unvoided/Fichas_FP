#include <stdio.h>

int main() {
    
    char opcao;
    int letra;
    
    printf("Qual o modo a apresentar o abcedário?\n");
    printf("M - Maiúsculas\n");
    printf("m - minúsculas\n");
    printf("Opção: ");
    scanf("%c", &opcao);
    
    switch (opcao) {
        
        case 'M':
            
            for (letra = 65; letra <= 90; letra++) {
                printf("%c\n", (char) letra);
            }
            break;
        
        case 'm':
            
            for (letra = 97; letra <= 122; letra++) {
                printf("%c\n", (char) letra);
            }
            break;
            
        default:
            
            printf("Insira uma opção válida!");
            break;    
            
    }

    return (0);
}

