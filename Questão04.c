#include <stdio.h>

int buscabinariarecursiva(int arr[], int esquerda, int direita, int alvo) {
    if (direita >= esquerda) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (arr[meio] == alvo) {
            return meio;
        }
        
        if (arr[meio] > alvo) {
            return buscabinariarecursiva(arr, esquerda, meio - 1, alvo);
        }
        
        return buscabinariarecursiva(arr, meio + 1, direita, alvo);
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int alvo = 10;
    int resultado = buscabinariarecursiva(arr, 0, n - 1, alvo);
    (resultado == -1) ?
    printf("Elemento nao encontrado\n") :
    
    printf("Elemento encontrado no indice: %d\n", resultado);
    
    return 0;
}