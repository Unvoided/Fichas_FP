/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: diogo
 *
 * Created on 21 de outubro de 2020, 14:27
 */

#include <stdio.h>

int main() {
    float base, altura;
    printf("Quanto mede a base do retângulo? ");
    scanf("%f", &base);
    printf("Quanto mede a altura do retângulo? ");
    scanf("%f", &altura);
    printf("A área do retângulo é: %f\n", base * altura);
    printf("O perímetro do retânguo é: %f\n", (base * 2) + (altura * 2));
    return (0);
}


