#include <stdio.h>

int main() {
    
    int i;
    char texto[11];
    
    printf("Insira um texto até 10 caracteres: ");
    fgets(texto, sizeof(texto), stdin);
    
    for(i = 0; texto[i] != '\0'; i++) {
        texto[i] += 4;        
    }
    
    printf("O seu texto foi encriptado.\n");
    printf("Resultado: %s", texto);

    return 0;
}

