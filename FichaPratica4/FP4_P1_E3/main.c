#include <stdio.h>

int main() {
    
    int matriz[4][5];
    int x, y, numero, total = 0;
    
    for (x = 0; x < 4; x++) {        
        for (y = 0; y < 5; y++) {
            printf("Insira um número: ");
            scanf("%d", &matriz[x][y]);
        }
    }
    
    printf("Insira o número que quer verificar quantas vezes existe na matriz: ");
    scanf("%d", &numero);
    
    for (x = 0; x < 4; x++) {        
        for (y = 0; y < 5; y++) {
            if (matriz[x][y] == numero) {
                ++total;
            } else { 
                continue;
            }
        }
    }
    
    if (total == 1) {
        printf("O número que inseriu foi encontrado 1 vez na matriz");
    } else {
        printf("O número que inseriu foi encontrado %d vezes na matriz", total);
    }    
    
    return 0;
}

