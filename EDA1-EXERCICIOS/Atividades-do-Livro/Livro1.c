#include  <stdio.h>

int main(){
    int c;
    int estaVariavel;
    int q76354;
    int numero;

/*estou pedindo para o usuario inicialmente digitar um inteiro e colocando alguns critérios*/

    printf("Digite um numero inteiro:");
    scanf("%d", &c); 
    
    if(c == 7){
        printf("Este numero é igual a 7\n");
    } else if ( c != 7){
        printf("Este numero nao é 7\n");
    }

/*apenas um exercicio de printf para separar palavras usando \n*/


    printf("Este é um programa em c\n");
    printf("Este é um\n programa em c\n");
    printf("Este\né\num\nprograma\nem\nc\n");
}

