/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: diogo
 *
 * Created on 21 de outubro de 2020, 16:26
 */

#include <stdio.h>

int main() {
    
    int mm, ms, totalsegundos = 0, horas, minutos, segundos; 
    
    printf("Insira a duração da 1ª música (minutos:segundos): ");
    scanf("%d:%d", &mm, &ms);
    totalsegundos += mm*60+ms;
    
    printf("Insira a duração da 2ª música (minutos:segundos): ");
    scanf("%d:%d", &mm, &ms);
    totalsegundos += mm*60+ms;
    
    printf("Insira a duração da 3ª música (minutos:segundos): ");
    scanf("%d:%d", &mm, &ms);
    totalsegundos += mm*60+ms;
    
    printf("Insira a duração da 4ª música (minutos:segundos): ");
    scanf("%d:%d", &mm, &ms);
    totalsegundos += mm*60+ms;
    
    printf("Insira a duração da 5ª música (minutos:segundos): ");
    scanf("%d:%d", &mm, &ms);
    totalsegundos += mm*60+ms;
    
    horas = totalsegundos/3600;
    minutos = (totalsegundos%3600)/60;
    segundos = totalsegundos%60;  
    
    printf("O álbum tem a duração de %dh %dm %ds.", horas, minutos, segundos);
        
    return (0);
}

