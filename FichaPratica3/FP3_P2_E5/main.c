#include <stdio.h>


int main() {
    
    int cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0, cand5 = 0, branco = 0, nulo = 0, voto, total = 0;
    double p1, p2, p3, p4 ,p5, pb, pn;
    
    printf("Informações de votação:\n");
    printf("\n1 - Candidato 1\n");
    printf("2 - Candidato 2\n");
    printf("3 - Candidato 3\n");
    printf("4 - Candidato 4\n");
    printf("5 - Candidato 5\n");
    printf("\n0 - Voto em branco\n");
    printf("9 - Voto nulo\n");
    printf("\n-1 - Terminar votação\n");
    
    while (voto != -1) {
        
        printf("\nInsira o seu voto: ");
        scanf(" %d", &voto);
        
        switch (voto) {
            
            case 1:
                ++cand1;
                ++total;
                break;
            case 2:
                ++cand2;
                ++total;
                break;
            case 3:
                ++cand3;
                ++total;
                break; 
            case 4:
                ++cand4;
                ++total;
                break;
            case 5:
                ++cand5;
                ++total;
                break;
            case 0:
                ++branco;
                ++total;
                break;
            case 9:
                ++nulo;
                ++total;
                break;
            default:
                printf("Voto inválido!\n");
        }
        
    }
    
    p1 = (double)cand1 / total * 100;
    p2 = (double)cand2 / total * 100;
    p3 = (double)cand3 / total * 100;
    p4 = (double)cand4 / total * 100;
    p5 = (double)cand5 / total * 100;
    pb = (double)branco / total * 100;
    pn = (double)nulo / total * 100;
    
    printf("Total de votos: %d votos\n", total);
    printf("\nPercentagens\n");
    printf("Candidato 1: %lf \n", p1);
    printf("Candidato 2: %lf \n", p2);
    printf("Candidato 3: %lf \n", p3);
    printf("Candidato 4: %lf \n", p4);
    printf("Candidato 5: %lf \n", p5);
    printf("\nVotos em branco: %lf \n", pb);
    printf("Votos nulos: %lf \n", pn);

    return 0;
}

