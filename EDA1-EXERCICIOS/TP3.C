#include <stdio.h>

int main() {
    char escolha;
    float valor, resultado;

    while (1) {
        printf("Escolha uma opção:\n");
        printf("C - Fahrenheit para Celsius\n");
        printf("F - Celsius para Fahrenheit\n");
        printf("S - Sair\n");

        scanf(" %c", &escolha);

        if (escolha == 'S' || escolha == 's') {
            printf("Saindo do programa. Adeus!\n");
            break;
        }

        printf("Digite a temperatura: ");
        scanf("%f", &valor);

        if (escolha == 'C' || escolha == 'c') {
            resultado = (valor - 32.0) * 5.0 / 9.0;
            printf("A temperatura em Celsius é: %.2f\n", resultado);
        } else if (escolha == 'F' || escolha == 'f') {
            resultado = (valor * 9.0 / 5.0) + 32.0;
            printf("A temperatura em Fahrenheit é: %.2f\n", resultado);
        } else {
            printf("Opção inválida! Por favor, escolha C, F ou S.\n");
        }
    }

    return 0;
}