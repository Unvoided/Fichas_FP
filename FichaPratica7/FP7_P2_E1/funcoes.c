#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

void verLista(livro livros[], int cont) {
    for(int i = 0; i < cont; i++) {
        printf("\n%s\n", LINE);
        printf("Livro nº%d\n", i+1);
        
        //Titulo
        printf("\nTítulo: %s\n", livros[i].titulo);
        
        //ISBN
        printf("ISBN: %s\n", livros[i].ISBN);
        
        //Data de publicação
        printf("Data de publicação: %d-%d-%d\n", livros[i].publicacao.dia, livros[i].publicacao.mes, livros[i].publicacao.ano);
        
        //Tipo
        switch(livros[i].tipo) {
            case FIC:
                printf("Tipo: Ficção\n");
                break;
            case TEC:
                printf("Tipo: Técnico\n");
                break;
            case ROM:
                printf("Tipo: Romance\n");
                break;
            case EST:
                printf("Tipo: Estudo\n");  
                break;
            default:
                printf("Erro????\n");
                break;
        }
        
        //Autores
        for(int j = 0; j < livros[i].num_autores; j++) {
            printf("Autor %d: %s\n", j+1, livros[i].autor[j].nome); 
            printf("   - Data de nascimento: %d-%d-%d\n", livros[i].autor[j].nascimento.dia, livros[i].autor[j].nascimento.mes, livros[i].autor[j].nascimento.ano);
            printf("   - Página web: %s\n", livros[i].autor[j].pagina);
        }
        
        //Editora
        printf("Editora: %s\n", livros[i].editora.nome);
        printf("   - Morada %s", livros[i].editora.morada);
        
        printf("%s\n", LINE);
        while ((getchar()) != '\n');
        getchar();
    }
}    
    
tipo obterTipo() {
    tipo option;
    
    while(1) {
    
        printf("\nInsira o tipo de livro: \n");
        printf("1 - Ficção\n");
        printf("2 - Técnico\n");
        printf("3 - Romance\n");
        printf("4 - Estudo\n");;
        printf("\nOpção: ");
        scanf("%u", &option);
        
        if (option == FIC || option == EST || option == TEC || option == ROM) {
            return option;
        } else {
            printf("Insira uma opção válida.");
            getchar();
        }  
    }
}

void fazerRegisto(livro *livros) {
    
    //ISBN
    printf("Insira o ISBN do livro: ");
    while ((getchar()) != '\n'); //desbugar fgets
    fgets((*livros).ISBN, sizeof((*livros).ISBN), stdin);
    
    //Data de publicação
    printf("Insira a data de publicação:\n");
    printf("Dia: ");
    scanf("%d", &(*livros).publicacao.dia);
    printf("Mês: ");
    scanf("%d", &(*livros).publicacao.mes);
    printf("Ano: ");
    scanf("%d", &(*livros).publicacao.ano);
    
    //Título
    printf("Insira o título do Livro: ");
    while ((getchar()) != '\n');
    fgets((*livros).titulo, sizeof((*livros).titulo), stdin);
    
    //Tipo
    (*livros).tipo = obterTipo();
    
    //Editora
    printf("Insira os dados correspondentes à editora:\n");
    while ((getchar()) != '\n');
    printf("Nome: ");
    fgets((*livros).editora.nome, sizeof((*livros).editora.nome), stdin);
    printf("Morada: ");
    fgets((*livros).editora.morada, sizeof((*livros).editora.morada), stdin);

    //Autores
    int num;
    while (1) {
        printf("Insira o número de autores (máximo 5): ");
        scanf("%d", &(*livros).num_autores);
        
        if ((*livros).num_autores > 0 && (*livros).num_autores < 6) {
            for(int i = 0; i < (*livros).num_autores; i++) {
                
                //Nome
                printf("Nome autor %d: ", i + 1);
                while ((getchar()) != '\n');
                fgets((*livros).autor[i].nome, sizeof((*livros).autor[i].nome), stdin);
                
                //Pagina
                printf("Página web autor %d: ", i + 1);
                fgets((*livros).autor[i].pagina, sizeof((*livros).autor[i].pagina), stdin);
                
                //Data
                printf("Data de nascimento autor %d:\n", i + 1);
                printf("Dia: ");
                scanf("%d", &(*livros).autor[i].nascimento.dia);
                printf("Mês: ");
                scanf("%d", &(*livros).autor[i].nascimento.mes);
                printf("Ano: ");
                scanf("%d", &(*livros).autor[i].nascimento.ano);
            }
            break;
            
        } else {
            printf("Insira um número válido!\n");
            getchar();
        }
    }
    
    printf("\n\nLivro adicionado com sucesso!");
    getchar();
}

void verificarMaximo(livro livros[], int *cont) {
    if(*cont < MAX_LIVROS) {
        fazerRegisto(&livros[*cont]);
        (*cont)++;
    } else {
        printf("\nRegisto cheio!");
    }
}

void menu(livro livros[], int *cont) {
    
    int opcao;
    
    do {
    
        printf("\n%s\n", LINE);
        printf("Menu\n");
        printf("%s\n", LINE);
        printf("Selecione a operação a realizar:\n");
        printf("\n1 - Adicionar Livro\n");
        printf("2 - Ver Lista de Livros\n");
        printf("3 - Sair\n");
        printf("%s\n", LINE);
        printf("Número de livros registados: %d\n", *cont);
        printf("%s\n", LINE);
        printf("\nOpção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                verificarMaximo(livros, cont);
                break;
            case 2:
                verLista(livros, *cont);
                break;
            case 3:
                break;                
            default:
                printf("\nOpção inválida!\n");
                break;
        }
        
    } while (opcao != 3);
    
}
