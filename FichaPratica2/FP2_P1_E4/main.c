/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: diogo
 *
 * Created on 23 de outubro de 2020, 10:49
 */

#include <stdio.h>

int main() {
    
    int num;
    
    printf("Insira um número: ");
    scanf("%d", &num);
    
    (num % 2 == 0) ? printf("O número é par.") : printf("O número é impar.");
    
    return (0);
}

