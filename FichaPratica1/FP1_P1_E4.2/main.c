/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: diogo
 *
 * Created on 21 de outubro de 2020, 14:29
 */

#include <stdio.h>

int main() {
    float raio, PI;
    PI = 3.1415;
    printf("Quanto mede o raio da circunferência? ");
    scanf("%f", &raio);
    printf("A área da circunferência é: %f\n", PI * (raio * raio));
    return (0);
}


