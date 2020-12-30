#define MIN 1
#define MAX 10

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

