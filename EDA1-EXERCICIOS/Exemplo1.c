#include <stdio.h>

int primo(int numero)
{
    if (numero <= 1)
        return 0;

    for (int i = 2; i * i <= numero; i++)
    {
        if (numero % i == 0)
            return 0; 
    }

    return 1; 
}

void adicao(int n1, int n2)
{
    printf("soma = %d \n", n1 + n2);
}

void subtracao(int n1, int n2)
{
    printf("subtração = %d \n", n1 - n2);
}

void multiplicacao(int n1, int n2)
{
    printf("multiplicação = %d\n", n1 * n2);
}

void divisao(int n1, int n2)
{
    if (n2 == 0)
    {
        printf("não é possível dividir por zero\n");
    }
    else
    {
        printf("divisao = %d\n", n1 / n2);
    }
}

int main()
{
    int numero1, numero2;
    int operacao, condicao;

    printf("#-------------------#\n");
    printf("0 - adicao \n");
    printf("1 - subtracao\n");
    printf("2 - multiplicacao\n");
    printf("3 - divisao\n");
    printf("#--------------------#\n");

    printf("deseja realizar qual operação (1 para sim, 0 para nao)? \n");
    scanf(" %d", &condicao);

    while (condicao == 1)
    {
        printf("Digite o primeiro valor\n");
        scanf(" %d", &numero1);

        if (primo (numero1))
        {
            printf("O número %d é primo!\n", numero1);
        }
        else
        {
            printf("O número %d não é primo.\n", numero1);
        }

        printf("Digite o segundo valor\n");
        scanf(" %d", &numero2);

        if (primo(numero2))
        {
            printf("O número %d é primo!\n", numero2);
        }
        else
        {
            printf("O número %d não é primo.\n", numero2);
        }

        printf("Digite a operacao\n");
        scanf(" %d", &operacao);

        switch (operacao)
        {
        case 0:
            adicao(numero1, numero2);
            break;
        case 1:
            subtracao(numero1, numero2);
            break;
        case 2:
            multiplicacao(numero1, numero2);
            break;
        case 3:
            divisao(numero1, numero2);
            break;
        default:
            printf("operacao invalida\n");
        }

        printf("Deseja realizar outra operacao (1 para sim, 0 para nao)?\n");
        scanf("%d", &condicao);
    }

    return 0;
}
