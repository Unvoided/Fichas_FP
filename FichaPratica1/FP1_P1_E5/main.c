/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: diogo
 *
 * Created on 21 de outubro de 2020, 14:31
 */

#include <stdio.h>

int main() {
    int a = 2, b = 4, c = 3, d;
    d = (((a = a + 1) + ++b) * c++) % 2;
    printf("%d, %d, %d, %d", a, b, c, d);
    return 0;
}

