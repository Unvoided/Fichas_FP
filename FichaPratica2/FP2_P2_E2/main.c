#include <stdio.h>

int main() {
    
    float saldo, movimento, saldofinal;
    
    printf("Insira o saldo da sua conta bancária: ");
    scanf("%f", &saldo);
    
    printf("Insira o montante a creditar/debitar: ");
    scanf("%f", &movimento);
    
    saldofinal = saldo + movimento;
    
    if (saldofinal > 0) {
        
        printf("A operação é possível, ficará com saldo positivo\n");
        printf("Saldo final: %f", saldofinal);
        
    } else if (saldofinal == 0){
        
        printf ("A operação não é possível, ficará com saldo nulo.\n"); 
        printf("Saldo final: %f", saldofinal);
        
    } else {
        
        printf("A operação não é possível, ficará com saldo negativo.\n");
        printf("Saldo final: %f", saldofinal);
        
    }
        
    return (0);
}

