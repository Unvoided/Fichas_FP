/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: diogo
 *
 * Created on 21 de outubro de 2020, 14:25
 */

#include <stdio.h>

int main() {
    float num1, num2;
    printf("Insira o 1º número: ");
    scanf("%f", &num1);
    printf("Insira o 2º número: ");
    scanf("%f", &num2);
    printf("A soma é: %f\n", num1 + num2);
    printf("A diferença é: %f\n", num1 - num2);
    printf("O produto é: %f\n", num1 * num2);
    printf("A divisão é: %f", num1 / num2);
    return (0);
}


