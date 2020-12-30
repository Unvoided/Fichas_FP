#include <stdio.h>

int main() {
    
    float x, y;
    
    printf("Insira a coordenada x do ponto: ");
    scanf("%f", &x);
    
    printf("Insira a coordenada y do ponto: ");
    scanf("%f", &y);
    
    if (x > 0 && y > 0) {
        printf("O ponto pertence ao 1º quadrante.");
    } else if (x < 0 && y > 0) {
        printf("O ponto pertence ao 2º quadrante.");
    } else if (x < 0 && y < 0) {
        printf("O ponto pertence ao 3º quadrante.");
    } else if (x > 0 && y < 0) {
        printf("O ponto pertence ao 4º quadrante.");
    } else if (x == 0 && y == 0) {
        printf("O ponto pertence à origem (0,0).");
    } else if (x == 0 && y > 0) {
        printf("O ponto pertence ao eixo positivo de y.");
    } else if (x == 0 && y < 0) {
        printf("O ponto pertence ao eixo negativo de y.");
    } else if (x > 0 && y == 0) {
        printf("O ponto pertence ao eixo positivo de x.");
    } else if (x < 0 && y == 0) {
        printf("O ponto pertence ao eixo negativo de x.");
    } else {
        printf("Operação Inválida!");
    }
    

    return (0);
}

