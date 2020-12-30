#include <stdio.h>

int main() {
    
    char string1[10], string2[10];
    int tamanho = 0, i, j = 0, help;
    
    printf("Insira uma palavra até 9 caracteres: ");
    fgets(string1, sizeof(string1), stdin);
    
    while (string1[tamanho] != '\0') {
        tamanho++;
    }
    
    for(i = tamanho; i >= 0; i--) {
        help = string1[i];
        string2[j] = help;
        printf("%c", string2[j]);
        j++;
    }
    
    return 0;
}

