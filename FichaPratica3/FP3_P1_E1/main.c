#include <stdio.h>

int main() {
    int numero = 0, soma = 0;
    do {
    soma += numero;
    scanf("%d", &numero);
    } while ( numero > 0 );
    return (0);
}

