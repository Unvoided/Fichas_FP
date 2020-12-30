#include <stdio.h>

int main() {

    int i, j;
    
    for (i = 20, j = 0; i > j; i--, j++) {
        printf("\n%d %d", i, j);
    }

    return (0);
}

