#include <stdio.h>
#define BASE_E 40
#define BASE_C 60
#define BASE_A 80
#define BONUS_1 0.02
#define BONUS_2 0.05

int main() {
    
    char cargo, continuar;
    int dias, codigo;
    float irs, seguranca, vencimento, vencimentobase, pensao, valorliquido;
    
    while (continuar != 'n') {
    
        printf("Insira o seu código de funcionário: ");
        scanf("%d", &codigo);

        printf("\n");
        printf("Selecione o seu cargo.\n");
        printf("\n");
        printf("E - Empregado\n");
        printf("C - Chefe\n");
        printf("A - Administrador\n");
        printf("\n");
        printf("Opção: ");
        scanf(" %c", &cargo);

        switch (cargo) {

            case 'E':

                printf("\n");
                printf("Insira o número de dias que trabalhou este mês: ");
                scanf(" %d", &dias);

                if (dias <= 17) {
                    vencimentobase = BASE_E * dias;
                } else if (dias > 17 && dias < 27) {
                    vencimentobase = BASE_E * dias + ((BASE_E * dias) * BONUS_1);
                } else if (dias > 27) {
                    vencimentobase = BASE_E * dias + ((BASE_E * dias) * BONUS_2);;
                }

                pensao = 5 * dias;
                vencimento = vencimentobase + pensao;
                seguranca =  vencimento * 0.11 + vencimento * 0.2375;

                if (vencimento < 1000) {
                    irs = (vencimento) * 0.10;
                } else if (vencimento >= 1000 && vencimento <= 2500) {
                    irs = (vencimento) * 0.20;
                } else if (vencimento > 2500) {
                    irs = (vencimento) * 0.30;
                }

                break;

            case 'C':

                printf("\n");
                printf("Insira o número de dias que trabalhou este mês: ");
                scanf(" %d", &dias);

                if (dias <= 17) {
                    vencimentobase = BASE_E * dias;
                } else if (dias > 17 && dias < 27) {
                    vencimentobase = BASE_E * dias + ((BASE_C * dias) * BONUS_1);
                } else if (dias > 27) {
                    vencimentobase = BASE_E * dias + ((BASE_C * dias) * BONUS_2);;
                }

                pensao = 7.5 * dias;
                vencimento = vencimentobase + pensao;

                seguranca =  vencimento * 0.11 + vencimento * 0.2375;

                if (vencimento < 1000) {
                    irs = (vencimento) * 0.10;
                } else if (vencimento >= 1000 && vencimento <= 2500) {
                    irs = (vencimento) * 0.20;
                } else if (vencimento > 2500) {
                    irs = (vencimento) * 0.30;
                }

                break;

            case 'A':

                printf("\n");
                printf("Insira o número de dias que trabalhou este mês: ");
                scanf(" %d", &dias);

                if (dias <= 17) {
                    vencimentobase = BASE_E * dias;
                } else if (dias > 17 && dias < 27) {
                    vencimentobase = BASE_E * dias + ((BASE_A * dias) * BONUS_1);
                } else if (dias > 27) {
                    vencimentobase = BASE_E * dias + ((BASE_A * dias) * BONUS_2);;
                }

                pensao = 7.5 * dias;
                vencimento = vencimentobase + pensao;

                seguranca =  vencimento * 0.09 + vencimento * 0.21;

                if (vencimento < 1000) {
                    irs = (vencimento) * 0.10;
                } else if (vencimento >= 1000 && vencimento <= 2500) {
                    irs = (vencimento) * 0.20;
                } else if (vencimento > 2500) {
                    irs = (vencimento) * 0.30;
                }

                break;

            default:
                printf("Selecione uma opção válida!");
                return (0);         

        }

        valorliquido = vencimento - (irs + seguranca);

        printf("\n");
        printf("Valor ilíquido a receber fruto do vencimento: %f€\n", vencimento);
        printf("Total Subsídio de alimentação: %f€\n", pensao);
        printf("Valor da retenção IRS a entregar ao estado: %f€\n", irs);
        printf("Valor total a entregar à Segurança Social: %f€\n", seguranca);
        printf("Valor líquido a receber: %f€\n", valorliquido);
        printf("Encargo total: %f\n", b + c + d);
        printf("\n");
        printf("\nDeseja fazer um novo cálculo? (s/n): ");
        scanf("%c", continuar);       
    }    
   
    return (0);
}
