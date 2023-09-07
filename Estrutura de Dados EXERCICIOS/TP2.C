#include <stdio.h>

int main() {
    int numero, ehPrimo = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        ehPrimo = 0;
    } else {
        for (int i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                ehPrimo = 0;
                break;
            }
        }
    }

    if (ehPrimo) {
        printf("O número %d é primo.\n", numero);
    } else {
        printf("O número %d não é primo.\n", numero);
    }

    return 0;
}





