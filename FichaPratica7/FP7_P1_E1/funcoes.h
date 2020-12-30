#ifndef FUNCOES_H
#define FUNCOES_H
#define MAX_ALUNOS 30
#define LINE "----------------------------------------------"

typedef struct { 
  int dia, mes, ano;     
} Data;

typedef struct {
    int numero;
    Data data;
    char nome[101];
} fichaaluno;

void verificarMaximo(fichaaluno aluno[], int *cont);
void fazerRegisto(fichaaluno aluno[]);
void verLista(fichaaluno aluno[], int cont);
void menu(fichaaluno aluno[], int *cont);

#endif
