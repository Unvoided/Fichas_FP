/*
Implemente um programa que leia um valor inteiro do utilizador e crie uma função que imprima
numa linha um número de asteriscos igual ao valor inserido pelo utilizador. O valor inteiro deve ser
lido através de uma função.
 */


#include <stdio.h>

int lerValor() {
    int val;
    printf("Insira um valor: ");
    scanf("%d", &val);
    return val;
}

void imprimirAsteriscos(int valor) {
    int i;
    puts("");
    for(i = 0; i < valor; i++) {
        printf("%c", '*');
    }
}



int main() {
    
    int input = lerValor();

    imprimirAsteriscos(input);

    return 0;
}

