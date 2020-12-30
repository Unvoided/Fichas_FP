/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: diogo
 *
 * Created on 21 de outubro de 2020, 14:19
 */

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Insira o 1º número: ");
    scanf("%d", &num1);
    printf("Insira o 2º número: ");
    scanf(" %d", &num2);
    printf("A soma dos doios números é: %d", num1 + num2);
    return (0);
}

