#include <stdio.h>

int main() {
    
    int opcao;

    printf("=- MENU -=\n");
    printf("\n");
    printf("1) Criar\n");
    printf("2) Atualizar\n");
    printf("3) Eliminar\n");
    printf("4) Sair\n");
    printf("\n");
    printf("Selecione a opção: ");
    scanf("%d", &opcao);
    
    switch(opcao) {
        
        case 1:
            printf("\nOpção escolhida: 1) Criar\n");
            break;
            
        case 2:
            printf("\nOpção escolhida: 2) Atualizar\n");
            break;
            
        case 3:
            printf("\nOpção escolhida: 3) Eliminar\n");
            break;
            
        case 4:
            return(0);
            break;
            
        default:
            printf("\nOpção inválida!\n");
            break;
    }
    return (0);
}

