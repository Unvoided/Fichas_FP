#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

void verificarMaximo(fichaaluno aluno[], int *cont) {
    if(*cont < MAX_ALUNOS) {
        fazerRegisto(&aluno[*cont]);
        (*cont)++;
    } else {
        printf("\nRegisto cheio!");
    }
}

void fazerRegisto(fichaaluno *aluno) {
    printf("Insira o número do aluno: ");
    scanf("%d", &(*aluno).numero);
    while ((getchar()) != '\n');
    printf("Insira o nome do aluno: ");
    fgets((*aluno).nome, sizeof((*aluno).nome), stdin);
    printf("Insira a data de nascimento do aluno:\n");
    printf("Dia: ");
    scanf("%d", &(*aluno).data.dia);
    printf("Mês: ");
    scanf("%d", &(*aluno).data.mes);
    printf("Ano: ");
    scanf("%d", &(*aluno).data.ano);
}

void verLista(fichaaluno aluno[], int cont) {
    for(int i = 0; i < cont; i++) {
        printf("\n%s\n", LINE);
        printf("Ficha Aluno nº%d\n", aluno[i].numero);
        printf("\nNome: %s\n", aluno[i].nome);
        printf("Data de nasimento: %d-%d-%d\n", aluno[i].data.dia, aluno[i].data.mes, aluno[i].data.ano);
        printf("%s\n", LINE);
        getchar();
        getchar();
    }
    
    
}

void menu(fichaaluno aluno[], int *cont) {
    
    int opcao;
    
    do {
    
        puts(LINE);
        puts("Menu");
        puts(LINE);
        puts("Selecione a operação a realizar:");
        puts("\n1 - Adicionar Aluno");
        puts("2 - Ver Lista de Alunos");
        puts("3 - Sair");
        puts(LINE);
        printf("Número de elementos registados: %d\n", *cont);
        puts(LINE);
        printf("\nOpção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                verificarMaximo(aluno, cont);
                break;
            case 2:
                verLista(aluno, *cont);
                break;
            case 3:
                break;                
            default:
                printf("\nOpção inválida!\n");
                break;
        }
        
    } while (opcao != 3);
     
}

