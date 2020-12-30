#include <stdio.h>
void swap(int *v1, int *v2) {
    int temp = *v1;
    *v1 = *v2;
    *v2 = temp;
}

void ordenar(int *v1, int *v2, int *v3) {
    
    if (*v1 > *v2) {
        swap(v1, v2);
    }
    
    if (*v2 > *v3) {
        swap(v1, v2);
        
        if (*v1 > *v3) {
            swap(v1, v2);
        }
    }
}

int main() {
    
    int v1 = 1, v2 = 2, v3 = 3;
    
    ordenar(&v1, &v2, &v3);
    
    printf("%d %d %d", v1, v2, v3);

    return 0;
}

