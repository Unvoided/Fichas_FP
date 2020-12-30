#define SALARIO_DIA 40
void inicio(){
    printf("---------------------\n");
    printf("      XPTO LDA\n");
    printf("---------------------\n");
}

void getnFuncionario(){
    int nFuncionario;
    printf("inserir numero de Funcionário: ");
    scanf("%d",&nFuncionario);
}

char menu(){
    char a;
    do{
    printf("MENU\n"
            "E-Empregado\n"
            "C-Chefe\n"
            "A-Administrador\n"
            "M= ");scanf(" %c",&a);
    }while(a!= 'E' && a!= 'C' && a!= 'A');
    return a;
}

int getmes(int a[]){
    printf("quantos dias trabalou?");
    for(int i=0; i<12; i++){
        printf("\nmes %d: ",i + 1);
        scanf("%d", &a[i]);
    }
    for(int i=0; i<12; i++){
        return a[i];
    }
}

void printmes(int a[]){
    for(int i=0; i<12; i++){
        printf("%d ", a[i]);
    }
}

float contasE(int mes[],float VencimentoBase[], float SubsidioAlimentação[], float irs[], float total[], float SegurançaSocial[], float entidadePatronal[]){
    for(int i=0; i<12; i++){
        VencimentoBase[i] = mes[i] * SALARIO_DIA;
        if(mes[i]>20){
            VencimentoBase[i] += VencimentoBase[i]*0.05;
        }if(mes[i]>17){
            VencimentoBase[i] += VencimentoBase[i]*0.02;
        }
        SubsidioAlimentação[i] = mes[i] * 5;
        total[i] += SubsidioAlimentação[i] += VencimentoBase[i];
        if(total[i]<1000){
            irs[i] = total[i]*0.1;
        }
        if(1000<total[i]<2500){
            irs[i] = total[i]*0.2;
        }
        if(2500<total[i]){
            irs[i] = total[i]*0.3;
        }
        SegurançaSocial[i] = total[i]*0.11;
        entidadePatronal[i] = total[i]*0.2375;
    }
}

void printresultado(int mes[],float VencimentoBase[], float SubsidioAlimentação[], float irs[], float total[],float SegurançaSocial[], float entidadePatronal[]){
    for(int i=0; i<12; i++){
    printf("\nmes %d\n\n", i+1);
    printf("Dias de Tabalho: %d€\n",mes[i]);
    printf("Vencimento Base: %g€\n",VencimentoBase[i]);
    printf("Subsidio Alimentação: %g€\n",SubsidioAlimentação[i]);
    printf("IRS: %g€\n", irs[i]);
    printf("Segurança Social: %g€\n",SegurançaSocial[i]);
    printf("Segurança Social Entidade Patronal: %g€\n",entidadePatronal[i]);
    printf("Valor Liquido: %g€\n",total[i]- irs[i]- SegurançaSocial[i]);
    }
}
