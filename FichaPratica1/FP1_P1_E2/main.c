/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: diogo
 *
 * Created on 21 de outubro de 2020, 14:21
 */

#include <stdio.h>

int main() {
    int aluno1, aluno2, aluno3;
    printf("Insira a idade do aluno 1: ");
    scanf("%d", &aluno1);
    printf("Insira a idade do aluno 2: ");
    scanf("%d", &aluno2);
    printf("Insira a idade do aluno 3: ");
    scanf("%d", &aluno3);
    printf("A média de idades é: %f", (float)(aluno1 + aluno2 + aluno3) / 3);   
    return (0);
}




