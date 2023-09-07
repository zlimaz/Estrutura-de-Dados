/*Usando as estruturas condicionais e de repetição (implemente
um menu), crie um programa de calculadora que lê operações e
valores do usuário e mostre o resultado na tela.
*/
#include <stdio.h>

int main() {
    int opcao;
    float numero1, numero2, resultado;

    printf("Calculadora Simples\n");
    printf("1. Soma\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("0. Sair\n");

    while (1) {
        printf("Escolha uma opção (0-4): ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Saindo da calculadora. Adeus!\n");
            break;
        }

        if (opcao < 1 || opcao > 4) {
            printf("Opção inválida! Por favor, escolha uma opção válida.\n");
            continue;
        }

        printf("Digite dois números: ");
        scanf("%f %f", &numero1, &numero2);

        switch (opcao) {
            case 1:
                resultado = numero1 + numero2;
                break;
            case 2:
                resultado = numero1 - numero2;
                break;
            case 3:
                resultado = numero1 * numero2;
                break;
            case 4:
                if (numero2 == 0) {
                    printf("Erro! Divisão por zero.\n");
                    continue;
                } else {
                    resultado = numero1 / numero2;
                }
                break;
        }
        
        printf("Resultado: %.2f\n", resultado);
    }

    return 0;
}