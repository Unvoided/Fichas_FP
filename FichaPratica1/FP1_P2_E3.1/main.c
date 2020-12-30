/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: diogo
 *
 * Created on 21 de outubro de 2020, 15:31
 */

#include <stdio.h>

int main() {
    
    int valor1, valor2, vtemp;
    
    printf("Insira o valor 1: ");
    scanf("%d", &valor1);
    
    printf("Insira o valor 2: ");
    scanf(" %d", &valor2);
    
    vtemp = valor1;
    valor1 = valor2;
    valor2 = vtemp;
    
    printf("Após a permuta, o valor 1 ficou %d e o valor 2 ficou %d", valor1, valor2);
    
    return (0);
}

