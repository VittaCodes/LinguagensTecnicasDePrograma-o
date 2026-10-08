#include <stdio.h>
#include <stdlib.h>

int compara(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main(int argc, char *argv[]) {
    int valores[10];
    int maior, i;

    printf("Vamos ler os valores:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &valores[i]);
    }

    maior = valores[0];

    for (i = 0; i < 10; i++) {
        maior = compara(maior, valores[i]);
    }

    printf("O maior valor e: %d\n", maior);

    return 0;
}
