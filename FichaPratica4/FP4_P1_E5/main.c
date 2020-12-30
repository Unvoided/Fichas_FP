#include <stdio.h>

int main() {
    
    char string1[30], string2[30];
    int i, verdade = 1;
    
    printf("Insira uma palavra: ");
    fgets(string1, sizeof(string1), stdin);
    
    printf("Insira outra palavra: ");
    fgets(string2, sizeof(string2), stdin);

    for (i = 0; string1[i] != '\0' && string2 != '\0'; i++) {
        if (string1[i] == string2[i]) {
            continue;
        } else {
            verdade = 0;
            break;
        }
    }
    
    if (verdade == 1) {
        printf("As palavras são iguais!\n");
    } else {
        printf("As palavras são diferentes!\n");
    }
    
    printf("\nCarrega em qualquer tecla para sair...");
    getchar();
    
    return (0);
}

