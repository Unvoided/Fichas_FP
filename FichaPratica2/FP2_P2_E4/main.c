#include <stdio.h>

int main() {
    
    float teste1, teste2, media;
    
    printf("Insira a nota do primeiro teste: ");
    scanf("%f", &teste1);    
    
    if (teste1 >= 0 && teste1 <= 20) {
        printf("Insira a nota do segundo teste: ");
        scanf("%f", &teste2);
        if (teste2 >= 0 && teste2 <= 20) {
            media = (teste1*0.40 + teste2*0.60);
            if (media >= 9.5) {
                printf("O aluno foi aprovado com média de %f valores.", media);
            } else {
                printf("O aluno foi reprovado com média de %f valores.", media);
            }
        } else {
            printf("Insira um valor entre 0 e 20.");
        }
    } else {
        printf("Insira um valor entre 0 e 20.");
    }

    return (0);
}

