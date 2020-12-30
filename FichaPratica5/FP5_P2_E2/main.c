/*
Implemente um programa que leia as notas de um número aleatório de alunos. Considere que as
notas têm uma gama de valores de 0-20 utilizando o módulo myIntLib. Apresente a média das
notas lidas.
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "myIntLib.h"

int main() {
    
    int num_alunos, i;
    float media;
    
    srand(time(NULL));
    num_alunos =  rand() % 20;
    
    printf("Número de alunos: %d\n", num_alunos);
    
    float notas[num_alunos];
    
    for(i = 0; i < num_alunos; i++) {
   
        notas[i] = lerValores(i);    
        
    }
    
    media = calcularMedia(num_alunos, notas);
    
    printf("\nA média é: %f", media);
    
    return 0;
}

