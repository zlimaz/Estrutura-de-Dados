/*Sistema de Gerenciamento de Estoque - SGE
Suponha que você compõe a equipe de desenvolvimento de um sistema em C para gerenciar o estoque de uma loja. O sistema SGE (Sistema de Gerenciamento de Estoque) se baseia em dois tipos de dados: TProduto e TEstoque e possui quatro rotinas principais: alocaEstoque (realiza alocação dinâmica de memória), incluirProdutos (lê e armazena os detalhes dos produtos), listarProdutos (lista na tela  todos os produtos em estoque) e desalocaEstoque (realiza a desalocação de memória) conforme detalhado abaixo.

typedef struct {
int id;  //Código do produto
int quantidade;  //Quantitativo do produto em estoque (QMP)
float preco;  //Preço unitário do produto.
} TProduto;

typedef struct {
int qtdeProdutos;  //Quantidade máxima de diferentes produtos
TProduto *produtos; //Vetor contendo os detalhes de cada produto
} TEstoque;

O analista de testes da equipe montou um programa (função main() abaixo) para testar todas as funcionalidades do SGE. Como você pode ver, os testes das funções são realizados com base na variável Estoque.

int main() {
TEstoque Estoque;
alocaEstoque(&Estoque);
incluirProdutos(&Estoque); 
listarProdutos(&Estoque);
desalocaEstoque(&Estoque);

return 0;
}

Você está encarregado de desenvolver a função incluirProdutos conforme abaixo.

void incluirProdutos(TEstoque *pEstoque){
SEU CÓDIGO VAI AQUI!
}

Requisitos da função incluirProdutos:
R1. Ler do usuário os detalhes (Código, Quantidade e Preço) de todos os produtos conforme o tamanho do vetor de produtos. Veja que o parâmetro pEstoque é um parâmetro por referência. 

Em suma, sua tarefa é postar o código da função void incluirProdutos(TEstoque *pEstoque) . As outras funções do SGE estão prontas, uma vez que você concluir esta função, o programa de testes será executado corretamente e gerará saídas conforme os exemplos apresentados.

POSTE APENAS O CÓDIGO DA FUNÇÃO REQUERIDA. NÃO POSTE NADA A MAIS (main, includes ou outro código qualquer).

For example:
Input 	Result

3
1 5 10.50
2 3 15.75
3 8 20.00

	

ID: 1, Qt:5, Preço: 10.50
ID: 2, Qt:3, Preço: 15.75
ID: 3, Qt:8, Preço: 20.00
Memória liberada com sucesso

7
101 50 12.99
102 25 8.50
103 10 15.75
104 5 22.00
105 20 9.99
106 30 5.75
107 15 17.25

	

ID: 101, Qt:50, Preço: 12.99
ID: 102, Qt:25, Preço: 8.50
ID: 103, Qt:10, Preço: 15.75
ID: 104, Qt:5, Preço: 22.00
ID: 105, Qt:20, Preço: 9.99
ID: 106, Qt:30, Preço: 5.75
ID: 107, Qt:15, Preço: 17.25
Memória liberada com sucesso

Answer:(penalty regime: 10, 20, ... %)
*/


void incluirProdutos(TEstoque *pEstoque) {
    for (int i = 0; i <= pEstoque -> qtdeProdutos; i++) {
        printf("Digite o ID, quantidade e preço do produto %d:\n", i + 1);
        scanf("%d %d %f", 
              &(pEstoque->produtos[i].id), 
              &(pEstoque->produtos[i].quantidade), 
              &(pEstoque->produtos[i].preco));
    }
}

