/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: diogo
 *
 * Created on 21 de outubro de 2020, 17:08
 */

#include <stdio.h>

int main() {
    int codigofun, diastrab, vencimento, subsidio;
    float irs, segsocialfun, segsocialent, vencimentofinal;

    printf("Bem vindo à calculadora de vencimento da empresa XPTO, LDA!\n");
    printf("Por favor insira o seu código de funcionário: ", codigofun);
    scanf("%d", &codigofun);
    printf("Obrigado! Insira agora o número de dias de trabalho deste mês: ", diastrab);
    scanf("%d", &diastrab);

    vencimento = diastrab * 40;
    subsidio = diastrab * 5;
    irs = (vencimento + subsidio) * 0.1;
    segsocialfun = (vencimento + subsidio) * 0.11;
    segsocialent = (vencimento + subsidio) * 0.2375;
    vencimentofinal = vencimento + subsidio - irs - segsocialfun - segsocialent;

    printf("O valor ilíquido dos seus vencimentos é de %d€, pelos seus %d dias de trabalho.\n", vencimento, diastrab);
    printf("A isto soma-se o subsídio de alimentação, totalizando %d€.\n", subsidio);
    printf("A retenção do IRS associado a este valor é de %4.2f€.\n", irs);
    printf("Serão deduzidos também %4.2f€ para a segurança social pelos seus encargos de funcionário e %4.2f€ pelos seus encargos da entidade patronal.\n", segsocialfun, segsocialent);
    printf("Desta forma, o seu vencimento líquido total para este mês é: %4.2f€.", vencimentofinal);
    return (0);
}


