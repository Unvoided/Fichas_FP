#ifndef FUNCOES_H
#define FUNCOES_H
#define MAX_STRING 101
#define MAX_ISBN 50
#define MAX_LIVROS 50
#define MAX_AUTORES 5
#define LINE "----------------------------------------------"
#define FILENAME "data/livros.bin"

typedef struct {
    int dia, mes, ano;
} data;

typedef enum {FIC = 1, TEC, ROM, EST} tipo;

typedef struct {
    char nome[MAX_STRING], morada[MAX_STRING];
} editora;

typedef struct {
    char nome[MAX_STRING], pagina[MAX_STRING];
    data nascimento;
} autores;

typedef struct {
    int num_autores;
    char ISBN[MAX_ISBN], titulo[MAX_STRING];
    data publicacao;
    tipo tipo;
    editora editora;
    autores autor[MAX_AUTORES];
} livro;

void verLista(livro livros[], int cont);
tipo obterTipo();
void fazerRegisto(livro *livros);
void verificarMaximo(livro livros[], int *cont);
void menu(livro livros[], int *cont);
void lerDados(livro livros[], int *cont);
void guardarDados(livro livros[], int *cont);

#endif /* FUNCOES_H */

