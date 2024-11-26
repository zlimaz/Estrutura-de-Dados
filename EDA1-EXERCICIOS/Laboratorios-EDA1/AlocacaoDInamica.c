//Alocação dinâmica e estruturas heterogêneas (structs).

/*Suponha que você seja um cientista de dados trabalhando em uma empresa de análise climática. Você
precisa analisar as temperaturas diárias de várias cidades ao longo de um período indefinido. As temperaturas
são fornecidas uma por uma e não há um número fixo de dias para análise, o que torna necessário o uso de
alocação dinâmica de memória para armazenar essas temperaturas.*/

#include <stdio.h>
#include <stdlib.h>
#include "tipos.h"


void reset (TTemperaturas *temp)
{
    
}





int main()
{
    int opcao;
    int condicao, operacao;

    printf("#-------------------#\n");
    printf("0 - Reset \n");
    printf("1 - Inserir Medida\n");
    printf("2 - Estatistica\n");
    printf("3 - Sair\n");
    printf("#--------------------#\n");

    printf("deseja realizar uma operacao (1 para sim, 0 para nao)? \n");
    scanf(" %d", &condicao);

    while (condicao == 1)
    {
        printf("Digite a operacao Desejada:\n");
        scanf(" %d", &opcao);


        switch (operacao)
        {
        case 0:
        
            break;
        case 1:
            
            break;
        case 2:
            
            break;
        case 3:
            
            break;
        default:
            printf("operacao invalida\n");
        }

        printf("Deseja realizar outra operacao (1 para sim, 0 para nao)?\n");
        scanf("%d", &condicao);
    }

    return 0;
}



