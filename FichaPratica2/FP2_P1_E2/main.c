/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: diogo
 *
 * Created on 23 de outubro de 2020, 10:28
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    
    int n1, n2, n3;
    
    printf("Insira um número: ");
    scanf("%d",&n1);
    
    printf("Insira outro número: ");
    scanf("%d",&n2);
    
    printf("Insira outro número: ");
    scanf("%d",&n3);
    
    if (n1 < n2 && n1 < n3) {
        printf("O menor número é %d.", n1);
    } else if (n2 < n1 && n2 < n3) {
        printf("O menor número é %d.", n2);
    } else if (n3 < n1 && n3 < n2) {
        printf("O menor número é %d.", n3);
    } else {
        printf("Insira pelo menos um número diferente!");
    }            
    
    return (0);
}

