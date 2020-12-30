/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: diogo
 *
 * Created on 21 de outubro de 2020, 14:38
 */

#include <stdio.h>

int main() {
    int c1, c2, c3;
    printf("Insira um caracter: ");
    c1 = getchar();
    c2 = c1 - 1;
    c3 = c1 + 1;
    printf("O seu antecessor é %c\n", c2);
    printf("O seu sucessor é %c", c3);
    return (0);
}

