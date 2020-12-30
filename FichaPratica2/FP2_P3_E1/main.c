#include <stdio.h>

int main() {
    
    char cargo;
    int dias, codigo;
    float irs, seguranca, vencimento, vencimentobase, pensao, valorliquido;
    
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
            
            vencimentobase = 40 * dias;
            pensao = 5 * dias;
            vencimento = vencimentobase + pensao;
            
            seguranca =  vencimento * 0.11 + vencimento * 0.2375;
            
            if (vencimento < 1000) {
                irs = (vencimento) * 0.10;
            } else {
                irs = (vencimento) * 0.20;
            }
            break;
           
        case 'C':
            
            printf("\n");
            printf("Insira o número de dias que trabalhou este mês: ");
            scanf(" %d", &dias);
            
            vencimentobase = 60 * dias;
            pensao = 7.5 * dias;
            vencimento = vencimentobase + pensao;
            
            seguranca =  vencimento * 0.11 + vencimento * 0.2375;
            
            if (vencimento < 1000) {
                irs = (vencimento) * 0.10;
            } else {
                irs = (vencimento) * 0.20;
            }
            break;

        case 'A':
            
            printf("\n");
            printf("Insira o número de dias que trabalhou este mês: ");
            scanf(" %d", &dias);
            
            vencimentobase = 80 * dias;
            pensao = 7.5 * dias;
            vencimento = vencimentobase + pensao;
            
            seguranca =  vencimento * 0.09 + vencimento * 0.21;
            
            if (vencimento < 1000) {
                irs = (vencimento) * 0.10;
            } else {
                irs = (vencimento) * 0.20;
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
    
    
    return (0);
}

