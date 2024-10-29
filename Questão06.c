#include <stdio.h>

int maior(int a, int b, int c) {
    int maior = a; 
    if (b > maior) {
        maior = b; 
    }
    if (c > maior) {
        maior = c; 
    }
    return maior; 
}

int main() {
    int num1 = 45, num2 = 40, num3 = 47;
    printf("O maior numero e: %d\n", maior(num1, num2, num3));
    
    return 0;
}
