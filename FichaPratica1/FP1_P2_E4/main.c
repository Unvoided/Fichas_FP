/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: diogo
 *
 * Created on 21 de outubro de 2020, 16:11
 */

#include <stdio.h>

int main() {
    
    float p1, p2, p3;
    
    printf("Valor do produto 1: ");
    scanf("%f", &p1);
            
    printf("Valor do produto 2: ");
    scanf(" %f", &p2);
    
    printf("Valor do produto 3: ");
    scanf(" %f", &p3);  

    printf("Você obteve um desconto de 10 por cento sobre o total dos produtos.\n");
    printf("O valor total a pagar é %f€", ((p1+p2+p3)*0.9));
    
    return (0);
}

