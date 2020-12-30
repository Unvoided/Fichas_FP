float lerValores(int indice) {
    
    float input = 0;
    
    do {
        
        printf("\nInsira a nota do %dº aluno: ", indice + 1);
        scanf("%f", &input);
        
        if (input < 0 || input > 20) {
            printf("\nInsira um valor entre 0 e 20.\n");
            continue;
        }
        
    } while (input < 0 || input > 20);
    
    return input;
}


float calcularMedia(int nalunos, float nota[]) {
    
    float soma = 0;
    
    for(int i = 0; i < nalunos; i++) {
        
        soma += nota[i];
        
    }
    
    return (soma / nalunos);
    
}