/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: diogo
 *
 * Created on 23 de outubro de 2020, 10:09
 */

#include <stdio.h>

int main() {
    
    int a, b;
    
    printf("Insira um número: ");
    scanf("%d", &a);
    
    printf("Insira outro número: ");
    scanf("%d", &b);
    
    if (a > b) {
        printf("%d é maior que %d.\n", a, b);
        printf("Números pela ordem de maior para menor: %d, %d", a, b);
    } else if (a < b) {
        printf("%d é maior que %d.\n", b, a);
        printf("Números pela ordem de maior para menor: %d, %d", b, a);
    } else if (a == b) {
        printf("%d é igual %d.", a, b);
    } else {
        printf("Erro!");
    }
        
    
    return (0);
}

