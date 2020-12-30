#include <stdio.h>
#define MAX_PRODUTOS 10

int main() {
    
    int i;
    float preco[MAX_PRODUTOS]; 
    float total;  
    
    for(i = 0; i < MAX_PRODUTOS; i++) {
        printf("Insira o preço do produto nº%d: ", i+1);
        scanf("%f", &preco[i]);
        total += preco[i];
    }
    
    printf("O preco total de todos os produtos é: %f€", total);

    return 0;
}

