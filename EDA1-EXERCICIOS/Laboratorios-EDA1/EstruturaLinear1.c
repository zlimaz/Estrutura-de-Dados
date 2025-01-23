/*Programa para verificar o balanceamento de expressões aritméticas. Função Empilha.
Esta atividade visa desenvolver habilidades em estruturas de dados, especificamente em pilhas, e sua aplicação em problemas práticos. A tarefa é completar a implementação de uma função crucial para um programa que identifica se os delimitadores em expressões aritméticas, parênteses “()”, chaves “{}” e colchetes “[]”, estão corretamente balanceados.
O programa fornecido já possui a maior parte da lógica necessária para verificar o balanceamento de delimitadores em uma expressão. No entanto, ele está incompleto porque falta a implementação da função Empilha. Esta função é responsável por empilhar um delimitador à pilha cada vez que um delimitador aberto é encontrado em uma expressão aritmética fornecida pelo usuário na main.c. 

A pilha utilizada pelo programa está implementada em uma lista simplesmente encadeada cujo nó está definido abaixo. O topo da pilha está na cabeça desta lista:

// Tipo pilha
typedef struct no{
char caracter;
struct no *proximo;
} No;

O analista de testes da equipe montou um programa (função main() abaixo) para testar expressões aritméticas fornecidas pelo usuário.

// Função Main
int main(){
char exp[50];
int retorno;
scanf("%49[^\n]", exp);
retorno = identifica_formacao(exp);
if (retorno == 1)
printf("BALANCEADA\n");
else
printf("DESBALANCEADA\n");
return 0;
}

Você está encarregado de desenvolver a função Empilha conforme abaixo.

No *Empilha(No *pilha, char x){
SEU CÓDIGO VAI AQUI!
}

Em suma, sua tarefa é postar o código da função No *Empilha(No *pilha, char x) . As outras funções do programa estão prontas e uma vez que você concluir esta função, o programa de testes será executado corretamente e gerará saídas conforme os exemplos apresentados.

POSTE APENAS O CÓDIGO DA FUNÇÃO REQUERIDA. NÃO POSTE NADA A MAIS (main, includes ou outro código qualquer).

For example:
Input 	Result

(a + b) * [8 + (c - d)]

	

BALANCEADA

((a + b)

	

DESBALANCEADA

(a * {b + c}) / [d - e]

	

BALANCEADA*/

No* Empilha(No* pilha, char x) {
    No* novo = (No*) malloc(sizeof(No));
    if (novo == NULL) return NULL;
    novo->caracter = x;
    novo->proximo = pilha;
    return novo;
}