#include <stdio.h>

int main() {

    int numero = 1;
    while (numero <= 10) {
        printf("%d", numero);
        numero++;  //O erro estava presente nesta linha, em que a variável "numero" estava sempre a ser decrementada,
    }              //o que faz com que a condição "numero <= 10" nunca se verifique, ficando o progama, assim, num loop infinito. 
    
    return (0);
}