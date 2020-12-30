#include <stdio.h>

void foo(int a, int *aPtr) {
 // imprimir o valor de a
    printf("a: %d ", a);
    
 // imprimir o endereço de a
    printf("<%p>\n", &a);
    
 // imprimir o valor de aPtr
    printf("aPtr: %d ", *aPtr);
    
 // imprimir o endereço de aPtr
    printf("<%p>\n", &aPtr);
    
 // somar um ao valor de a
    a += 1;
    
 // somar um ao valor apontado por de aPtr
    *aPtr += 1;
    
}
int main() {
    int a = 0;
    
 // imprimir o valor de a
    printf("a: %d ", a);
    
 // imprimir o endereço de a
    printf("<%p>\n", &a);
            
    foo(a, &a);
    
 // imprimir o valor de a
    printf("a: %d", a);
    
    return 0;
}

