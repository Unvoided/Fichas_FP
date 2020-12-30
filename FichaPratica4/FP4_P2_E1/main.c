#include <stdio.h>

int main() {
    
    int numeros[10], i, maior = 0;
    
    for(i = 0; i < 10; i++) {
        
        printf("Insira o %dº número: ", i+1);
        scanf("%d", &numeros[i]);
        
        if(numeros[i]>numeros[i-1] && numeros[i] % 2 == 0) {
        maior = numeros [i];  
        }     
    }
    
    if (maior != 0) {
        printf("O maior número par é %d.", maior);
    } else {
        printf("Não há números pares.");
    }
    

    return 0;
}

