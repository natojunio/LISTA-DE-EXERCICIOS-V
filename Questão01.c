#include <stdio.h>

int somarecursiva(int n) {
    if (n == 1) {
        return 1;
    }
    return n + somarecursiva(n - 1);
    }

int main() {
    int numero;
    printf("Digite um numero inteiro positivo, por gentileza: ");
        scanf("%d", &numero);
    
    if (numero > 0) {
        printf("A soma de 1 até %d é: %d\n", numero, somarecursiva(numero));
    } else {
        printf("Por favor, respeite! insira um número positivo.\n");
    }
    
    return 0;
}

