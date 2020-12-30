#ifndef FUNCOES_H
#define FUNCOES_H
#define MAX_ALUNOS 30
#define LINE "----------------------------------------------"
#define LOG_FILE "data/log.txt"
#define FILENAME "data/alunos.bin"

typedef struct { 
  int dia, mes, ano;     
} Data;

typedef struct {
    int numero;
    Data data;
    char nome[101];
} fichaaluno;

void logMsg(char *msg, char *filename);
void verificarMaximo(fichaaluno aluno[], int *cont);
void fazerRegisto(fichaaluno aluno[]);
void verLista(fichaaluno aluno[], int cont);
void menu(fichaaluno aluno[], int *cont);
void lerDados(fichaaluno aluno[], int *cont);
void guardarDados(fichaaluno aluno[], int *cont);
void atualizarAluno(fichaaluno aluno[], int cont);
int procurarAluno(fichaaluno aluno[], int cont, int num);
void eliminarAlunos(fichaaluno aluno[], int *cont);
void eliminarAluno(fichaaluno *aluno, int *cont );

#endif
