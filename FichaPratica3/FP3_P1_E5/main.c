#include <stdio.h>

int main() {
    
    int num;
    
    printf("Insira um número inteiro positivo: ");
    scanf("%d", &num);
    
    if (num > 0) {
        
        if ((num % 2) == 0) {
            
            --num;
            
            for(; num > 0; num -= 2) {
                printf("%d\n", num);
            }                        
        } else {
            
            num -= 2;
            
            for(; num > 0; num -= 2) {
                printf("%d\n", num);
            }  
        }
        
    } else {
        printf("Insira um número maior que 0!");
    }

    return (0);
}

