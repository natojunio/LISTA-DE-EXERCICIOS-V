#include <stdio.h>
#include <stdlib.h>

void gerarPA(int n, int valor_inicial, int razao, int *array) {
    for (int i = 0; i < n; i++) {
        array[i] = valor_inicial + i * razao;
    }
    
    }

void imprimirarray(int n, int *array) {
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
        printf("\n");
    
}

int main() {
    int n = 5, valor_inicial = 2, razao = 3;
    
    int *array = (int *)malloc(n * sizeof(int));
    
    gerarPA(n, valor_inicial, razao, array);
    imprimirarray(n, array);
    
    free(array);
    
    return 0;
}