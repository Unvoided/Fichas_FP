#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "funcoes.h"

void logMsg(char *msg, char *filename) {
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        exit(EXIT_FAILURE);
    }

    fprintf(fp, "%d-%02d-%02d %02d:%02d:%02d - %s\n", tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday, tm->tm_hour, tm->tm_min, tm->tm_sec, msg);

    fclose(fp);
}

void verificarMaximo(fichaaluno aluno[], int *cont) {

    logMsg("Verificar máximo de alunos", LOG_FILE);

    if(*cont < MAX_ALUNOS) {
        logMsg("Adicionando aluno", LOG_FILE);
        fazerRegisto(&aluno[*cont]);
        (*cont)++;
        logMsg("Aluno adicionado", LOG_FILE);

    } else {
        logMsg("Verificar maximo: Registo cheio!", LOG_FILE);
        printf("\nRegisto cheio!");
    }
}

void fazerRegisto(fichaaluno *aluno) {
    
    while ((getchar()) != '\n');
    printf("Insira o nome do aluno: ");
    fgets((*aluno).nome, sizeof((*aluno).nome), stdin);
    printf("Insira o número do aluno: ");
    scanf("%d", &(*aluno).numero);
    printf("Insira a data de nascimento do aluno:\n");
    printf("Dia: ");
    scanf("%d", &(*aluno).data.dia);
    printf("Mês: ");
    scanf("%d", &(*aluno).data.mes);
    printf("Ano: ");
    scanf("%d", &(*aluno).data.ano);
}

void verLista(fichaaluno aluno[], int cont) {

    logMsg("Ver Lista", LOG_FILE);
   
    for(int i = 0; i < cont; i++) {
        printf("\n%s\n", LINE);
        printf("Ficha Aluno nº%d\n", aluno[i].numero);
        printf("\nNome: %s\n", aluno[i].nome);
        printf("Data de nasimento: %d-%d-%d\n", aluno[i].data.dia, aluno[i].data.mes, aluno[i].data.ano);
        printf("%s\n", LINE);        
    }
}

void atualizarAluno(fichaaluno aluno[], int cont) {

    logMsg("Inicizalizar atualização de aluno", LOG_FILE);

    int num, i;

    puts(LINE);
    printf("\nNúmero do aluno a atualizar (-1 para cancelar): ");
    scanf("%d", &num);
    puts(LINE);

    if(num != -1) {
        i = procurarAluno(aluno, cont, num);
        if(i == -1) {
            puts("Aluno não encontrado!");
        } else {
            logMsg("Atualizando aluno", LOG_FILE);
            fazerRegisto(&aluno[i]);
            logMsg("Aluno atualizado!", LOG_FILE);
        }
    } else {
        logMsg("Abortado", LOG_FILE);
    }
}

int procurarAluno(fichaaluno aluno[], int cont, int num) {
    logMsg("Procurando aluno", LOG_FILE);
    int i;
    for (i = 0; i < cont; i++) {
        if (aluno[i].numero == num) {
            logMsg("Procura concluída: Encontrado!", LOG_FILE);
            return i;
        }
    }
    logMsg("Procura concluída: Não Encontrado!", LOG_FILE);
    return -1;
}

void eliminarAlunos(fichaaluno aluno[], int *cont) {
    int num, i, j;

    puts(LINE);
    printf("\nNúmero do aluno a eliminar (-1 para cancelar): ");
    scanf("%d", &num);
    puts(LINE);

    if(num != -1) {
        i = procurarAluno(aluno, *cont, num);
        if(i == -1) {
            puts("Aluno não encontrado!");
        } else {
            logMsg("A eliminar aluno", LOG_FILE);
            for(j = i; j < *cont - 1; j++) {
                aluno[j] = aluno[j + 1];
            }

            eliminarAluno(&aluno[j], cont);
            (*cont)--;
            logMsg("Aluno eliminado!", LOG_FILE);
        }
    } else {
        logMsg("Abortado", LOG_FILE);
    }
}

void eliminarAluno(fichaaluno *aluno, int *cont ) {
    logMsg("Eliminando variáveis", LOG_FILE);

    (*aluno).numero = 0;
    strcpy((*aluno).nome, "");
    (*aluno).data.dia = (*aluno).data.mes = (*aluno).data.ano = 0;

    logMsg("Variáveis eliminadas!", LOG_FILE);
}

void menu(fichaaluno aluno[], int *cont) {

    logMsg("Menu", LOG_FILE);
    
    int opcao;
    
    do {
    
        puts(LINE);
        puts("Menu");
        puts(LINE);
        puts("Selecione a operação a realizar:");
        puts("\n1 - Adicionar Aluno");
        puts("2 - Consultar Alunos");
        puts("3 - Atualizar Aluno");
        puts("4 - Eliminar Aluno");
        puts("5 - Ler Dados");
        puts("6 - Guardar Dados");
        puts("0 - Sair");
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
                atualizarAluno(aluno, *cont);
                break;
            case 4:
                eliminarAlunos(aluno, cont);
                break;        
            case 5:
                lerDados(aluno, cont);
                break;
            case 6:
                guardarDados(aluno, cont);
                break;        
            case 0:
                logMsg("Sair", LOG_FILE);
                break;                    
            default:
                printf("\nOpção inválida!\n");
                logMsg("Operação inválida", LOG_FILE);
                break;
        }
        
    } while (opcao != 0);
     
}

void lerDados(fichaaluno aluno[], int *cont) {
    

    FILE *fp = fopen(FILENAME, "rb+");
    if (fp == NULL) {
        printf("Ficheiro não existente!");
    } else {
        fread(cont, sizeof(int), 1, fp);
        fread(aluno, sizeof(fichaaluno), MAX_ALUNOS, fp);
    }

    fclose(fp);
    
}

void guardarDados(fichaaluno aluno[], int *cont) {


    FILE *fp = fopen(FILENAME, "wb+");
    if (fp == NULL) {
        printf("Erro ao guardar ficheiro!");
    } else {
        fwrite(cont, sizeof(int) * 1, 1, fp);
        fwrite(aluno, sizeof(fichaaluno) * (*cont), MAX_ALUNOS, fp);
    }

    fclose(fp);

}
