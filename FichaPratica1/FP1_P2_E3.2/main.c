/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: diogo
 *
 * Created on 21 de outubro de 2020, 15:54
 */

#include <stdio.h>

int main() {
    
    int a, b;
    
    printf("Insira o valor 1: ");
    scanf("%d", &a);
    
    printf("Insira o valor 2: ");
    scanf(" %d", &b);
    
    b = a - b;
    a = a - b;
    b = b + a;
    
    printf("Após a permuta, o valor 1 ficou: %d, e o valor 2 ficou %d.", a, b);
    
    return (0);
}

