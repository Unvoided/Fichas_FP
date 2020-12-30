#include <stdio.h>

/*
 * Resposta:
 * Ambos os códigos apresentam o mesmo resultado independentemente da variável a.
 * Se a = 1, no primeiro caso é efetuada apenas uma comparação.
 * Se a = 1, no segundo caso são efetuadas três comparações
 */ 

int main() {
    
    int a;
    
    printf("Insira um número: ");
    scanf("%d", &a);
    
    switch (a) {       
        case 1:
            printf("Um");
            break;
        case 2:
            printf("Dois");
            break;
        case 3: 
            printf("Três");
            break;
        default:
            printf("Inseriu um número diferente de 1, 2 e 3");                  
    }
            
    return (0);
}

