#ifndef MYINTLIB_H
#define MYINTLIB_H

int soma(int a, int b) {
    return a + b;   
}

int subtracao(int a, int b) {
    return a - b;   
}

int multiplicacao(int a, int b) {
    return a * b;   
}

float divisao(int a, int b) {
    return a / b;   
}

void printAsterisks(int valor) {
    if (valor >= MIN && valor <= MAX) {
        for (int i = 0; i < valor; i++) {
            printf("*");
        } 
    } else {
        printf("Insira um valor entre %d e %d", MIN, MAX);
    }
}

int lerValor() {
    int val;
    printf("Insira um valor: ");
    scanf("%d", &val);
    return val;
}

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

int getMax(int arr[]) {
    
    int maior;
    
    for(int i = 0; i < 1; i++) {
        if(arr[i] > arr[i + 1]) {
            maior = arr[i];
        } else {
            maior = arr[i+1];
        }
    }
    
}

int getMin(int arr[]) {
    
    int maior;
    
    for(int i = 0; i < 1; i++) {
        if(arr[i] > arr[i + 1]) {
            maior = arr[i + 1];
        } else {
            maior = arr[i];
        }
    }
    
}

float encontrarPotencia(float x, float y) {
    
    if (y == 0) {
        return 1;
    } else if (y > 0) {
        return (x * encontrarPotencia(x, y - 1));
    } else if (y < 0) {
        return (1 / encontrarPotencia(x, -y));
    }
    
}

#endif


