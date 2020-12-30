/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: diogo
 *
 * Created on 21 de outubro de 2020, 15:11
 */

#include <stdio.h>

int main() {
    int n1, n2, n3;
    printf("Insira o número 1: ");
    scanf("%d", &n1);
    printf("Insira o número 2: ");
    scanf("%d", &n2);
    printf("Insira o número 3: ");
    scanf("%d", &n3);
    printf("A média aritmética é: %f\n", (float) ((n1 + n2 + n3) / 3));
    printf("A média ponderada é: %f", (float) ((n1 * 0.2) + (n2 * 0.3) + (n3 * 0.5)));
    return (0);
}

