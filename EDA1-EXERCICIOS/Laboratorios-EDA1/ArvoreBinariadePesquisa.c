/*
QUESTÃO 1
Sistema para Ordenação e Busca de Dados Pessoais - SOBP
Suponha que você compõe a equipe de desenvolvimento de um sistema em C para gerenciar dados pessoais (Nome e Idade) - SOBP. O SOBP se baseia em dois tipos de dado: TPessoa e TABPNo e possui quatro rotinas principais: AlocaNo (realiza alocação de um nó em uma Árvore Binária de Busca (ABP)), PrintRelatorio (gera um relatório por ordem de Idade), Busca (faz a busca de uma idade na ABP) e DesalocaABP  (desaloca todos os nós da ABP), conforme detalhado abaixo.

//Estrutura dos registros do dataset de pessoas
typedef struct {
    char name[100];
    int age;
} TPessoa;

// Estrutura do nó da árvore ABP:
//Esta ABP tem valores menores à esquerda da raíz e valores maiores à direita da raiz.  
typedef struct TABPNo {
int age;
int index; // Posição no dataset de pessoas
struct TABPNo *left;
struct TABPNo *right;
} TABPNo;

O analista de testes da equipe montou um programa (função main() abaixo) para testar todas as funcionalidades do SOBP em diferentes fontes de dado que ele elaborou:

int main() {
TABPNo* No, root;
int Idade, QtNosDesalocados;
char FonteDados;
 //Definição de qual fonte de dados será testada. Veja nos exemplos de entrada de dados:
scanf("%c", &FonteDados); 
//Aloca vários nós contendo idade e posição do dataset (veja tipo TABPNo) à árvore ABP :
root = Fill(FonteDados); 
scanf("%d", &Idade);  //Idade usada no teste de busca. Veja nos exemplos de entrada de dados.
PrintRelatorio(root); //Imprime um relatório por ordem de Idade. Veja nos exemplos de saída.
No = Busca(root, Idade); //Função de busca de uma idade na ABP
QtNosDesalocados = DesalocaABP(root); //Função para desalocar ABP e retornar a qt de nós desalocados
return 0;
}

Você está encarregado de desenvolver a função alocaNo que completa a função Fill, conforme códigos abaixo.

TABPNo*  alocaNo(TABPNo* root, int age, int index){
SEU CÓDIGO VAI AQUI!
}

// Função Fill: Gera uma ABP a partir de um um dataset (conjunto de registros do tipo TPessoa).
//dataCount é uma variável global do sistema. Armazena o total de nós da ABP.
TABPNo* Fill(TPessoa dataset[], int qtReistros) {
TABPNo* root = NULL;
dataCount = 0;
for(int i = 0; i < qtReistros); i++) {
Data[i] = dataset[i];
root = AlocaNo(root, Data[i].age, i); 
dataCount++;
}
return root;
}

Requisitos da função AlocaNo:
R1. Alocar um nó na posição correta da ABP. 

Em suma, sua tarefa é postar o código da função TABPNo*  alocaNo(TABPNo* root, int age, int index). As outras funções do SOBP estão prontas, uma vez que você concluir esta função, o programa de testes será executado corretamente e gerará saídas conforme os exemplos apresentados.

POSTE APENAS O CÓDIGO DA FUNÇÃO REQUERIDA. NÃO POSTE NADA A MAIS (main, includes ou outro código qualquer).

For example:
Input 	Result

A 21

	

=== RELATORIO  ===
Idade: 18, Nome: Diana_Pereira
Idade: 19, Nome: Bruno_Santos
Idade: 20, Nome: Fatima_Ribeiro
Idade: 21, Nome: Igor_Sousa
Idade: 22, Nome: Ana_Silva
Idade: 23, Nome: Eduardo_Costa
Idade: 24, Nome: Julia_Ferreira
Idade: 25, Nome: Carlos_Oliveira

=== BUSCA  ===
Encontrado: Igor_Sousa

Programa finalizado com sucesso.

D 45

	

=== RELATORIO  ===
Idade: 46, Nome: Isabel_Oliveira
Idade: 47, Nome: Kelly_Almeida
Idade: 48, Nome: Gabriela_Santos
Idade: 49, Nome: Monica_Pereira
Idade: 50, Nome: Nuno_Ferreira
Idade: 51, Nome: Jorge_Ribeiro
Idade: 52, Nome: Fernando_Costa
Idade: 53, Nome: Otavia_Sousa
Idade: 54, Nome: Leonardo_Martins
Idade: 55, Nome: Henrique_Silva

=== BUSCA  ===
Idade 45 não encontrada!

Programa finalizado com sucesso.

Answer:(penalty regime: 0 %)*/


TABPNo* AlocaNo(TABPNo* root, int age, int index) {
    if (root == NULL) {
        TABPNo* newNode = (TABPNo*)malloc(sizeof(TABPNo));
        if (newNode == NULL) {
            printf("Erro ao alocar memória.\n");
            exit(1);
        }
        newNode->age = age;
        newNode->index = index;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }

    if (age < root->age) {
        root->left = AlocaNo(root->left, age, index);
    } else if (age > root->age) {
        root->right = AlocaNo(root->right, age, index);
    } 

    return root;
}

/*QUESTÃO 2

Sistema para Ordenação e Busca de Dados Pessoais - SOBP
Suponha que você compõe a equipe de desenvolvimento de um sistema em C para gerenciar dados pessoais (Nome e Idade) - SOBP. O SOBP se baseia em dois tipos de dado: TPessoa e TABPNo e possui quatro rotinas principais: AlocaNo (realiza alocação de um nó em uma Árvore Binária de Busca (ABP)), PrintRelatorio (gera um relatório por ordem de Idade), Busca (faz a busca de uma idade na ABP) e DesalocaABP  (desaloca todos os nós da ABP), conforme detalhado abaixo.

//Estrutura dos registros do dataset de pessoas
typedef struct {
    char name[100];
    int age;
} TPessoa;

// Estrutura do nó da árvore ABP:
//Esta ABP tem valores menores à esquerda da raíz e valores maiores à direita da raiz.  
typedef struct TABPNo {
int age;
int index; // Posição no dataset de pessoas
struct TABPNo *left;
struct TABPNo *right;
} TABPNo;

O analista de testes da equipe montou um programa (função main() abaixo) para testar todas as funcionalidades do SOBP em diferentes fontes de dado que ele elaborou:

int main() {
TABPNo* No, root;
int Idade, QtNosDesalocados;
char FonteDados;
 //Definição de qual fonte de dados será testada. Veja nos exemplos de entrada de dados:
scanf("%c", &FonteDados); 
//Aloca vários nós contendo idade e posição do dataset (veja tipo TABPNo) à árvore ABP :
root = Fill(FonteDados); 
scanf("%d", &Idade);  //Idade usada no teste de busca. Veja nos exemplos de entrada de dados.
PrintRelatorio(root); //Imprime um relatório por ordem de Idade. Veja nos exemplos de saída.
No = Busca(root, Idade); //Função de busca de uma idade na ABP
QtNosDesalocados = DesalocaABP(root); //Função para desalocar ABP e retornar a qt de nós desalocados
return 0;
}

Você está encarregado de desenvolver a função PrintRelatorio, conforme códigos abaixo.

void PrintRelatorio(TABPNo* root)
{
SEU CÓDIGO VAI AQUI!
}

Requisitos da função PrintRelatorio:
R1. Gerar um relatório na tela conforme formado dos casos de testes. 

Em suma, sua tarefa é postar o código da função void PrintRelatorio(TABPNo* root). As outras funções do SOBP estão prontas, uma vez que você concluir esta função, o programa de testes será executado corretamente e gerará saídas conforme os exemplos apresentados.

POSTE APENAS O CÓDIGO DA FUNÇÃO REQUERIDA. NÃO POSTE NADA A MAIS (main, includes ou outro código qualquer).

For example:
Input 	Result

A 21

	

=== RELATORIO  ===
Idade: 18, Nome: Diana_Pereira
Idade: 19, Nome: Bruno_Santos
Idade: 20, Nome: Fatima_Ribeiro
Idade: 21, Nome: Igor_Sousa
Idade: 22, Nome: Ana_Silva
Idade: 23, Nome: Eduardo_Costa
Idade: 24, Nome: Julia_Ferreira
Idade: 25, Nome: Carlos_Oliveira

=== BUSCA  ===
Encontrado: Igor_Sousa

Programa finalizado com sucesso.

D 45

	

=== RELATORIO  ===
Idade: 46, Nome: Isabel_Oliveira
Idade: 47, Nome: Kelly_Almeida
Idade: 48, Nome: Gabriela_Santos
Idade: 49, Nome: Monica_Pereira
Idade: 50, Nome: Nuno_Ferreira
Idade: 51, Nome: Jorge_Ribeiro
Idade: 52, Nome: Fernando_Costa
Idade: 53, Nome: Otavia_Sousa
Idade: 54, Nome: Leonardo_Martins
Idade: 55, Nome: Henrique_Silva

=== BUSCA  ===
Idade 45 não encontrada!

Programa finalizado com sucesso.*/

void PrintRelatorio(TABPNo* root) {
    if (root == NULL) {
        return;
    }

    PrintRelatorio(root->left);

    printf("Idade: %d, Nome: %s\n", Data[root->index].age, Data[root->index].name);

    PrintRelatorio(root->right);
}
 

/* QUESTÃO 3
Sistema para Ordenação e Busca de Dados Pessoais - SOBP
Suponha que você compõe a equipe de desenvolvimento de um sistema em C para gerenciar dados pessoais (Nome e Idade) - SOBP. O SOBP se baseia em dois tipos de dado: TPessoa e TABPNo e possui quatro rotinas principais: AlocaNo (realiza alocação de um nó em uma Árvore Binária de Busca (ABP)), PrintRelatorio (gera um relatório por ordem de Idade), Busca (faz a busca de uma idade na ABP) e DesalocaABP  (desaloca todos os nós da ABP), conforme detalhado abaixo.

//Estrutura dos registros do dataset de pessoas
typedef struct {
    char name[100];
    int age;
} TPessoa;

// Estrutura do nó da árvore ABP:
//Esta ABP tem valores menores à esquerda da raíz e valores maiores à direita da raiz.  
typedef struct TABPNo {
int age;
int index; // Posição no dataset de pessoas
struct TABPNo *left;
struct TABPNo *right;
} TABPNo;

O analista de testes da equipe montou um programa (função main() abaixo) para testar todas as funcionalidades do SOBP em diferentes fontes de dado que ele elaborou:

int main() {
TABPNo* No, root;
int Idade, QtNosDesalocados;
char FonteDados;
 //Definição de qual fonte de dados será testada. Veja nos exemplos de entrada de dados:
scanf("%c", &FonteDados); 
//Aloca vários nós contendo idade e posição do dataset (veja tipo TABPNo) à árvore ABP :
root = Fill(FonteDados); 
scanf("%d", &Idade);  //Idade usada no teste de busca. Veja nos exemplos de entrada de dados.
PrintRelatorio(root); //Imprime um relatório por ordem de Idade. Veja nos exemplos de saída.
No = Busca(root, Idade); //Função de busca de uma idade na ABP
QtNosDesalocados = DesalocaABP(root); //Função para desalocar ABP e retornar a qt de nós desalocados
return 0;
}

Você está encarregado de desenvolver a função Busca, conforme códigos abaixo.

TABPNo* Busca(TABPNo* root, int age)
{
SEU CÓDIGO VAI AQUI!
}

Requisitos da função Busca:
R1. Fazer uma busca da idade (age) na ABP e retornar o ponteiro do nó encontrado. Caso não encontre, retorne NULL. 

Em suma, sua tarefa é postar o código da função TABPNo* Busca(TABPNo* root, int age). As outras funções do SOBP estão prontas, uma vez que você concluir esta função, o programa de testes será executado corretamente e gerará saídas conforme os exemplos apresentados.

POSTE APENAS O CÓDIGO DA FUNÇÃO REQUERIDA. NÃO POSTE NADA A MAIS (main, includes ou outro código qualquer).

For example:
Input 	Result

A 21

	

=== RELATORIO  ===
Idade: 18, Nome: Diana_Pereira
Idade: 19, Nome: Bruno_Santos
Idade: 20, Nome: Fatima_Ribeiro
Idade: 21, Nome: Igor_Sousa
Idade: 22, Nome: Ana_Silva
Idade: 23, Nome: Eduardo_Costa
Idade: 24, Nome: Julia_Ferreira
Idade: 25, Nome: Carlos_Oliveira

=== BUSCA  ===
Encontrado: Igor_Sousa

Programa finalizado com sucesso.

D 45

	

=== RELATORIO  ===
Idade: 46, Nome: Isabel_Oliveira
Idade: 47, Nome: Kelly_Almeida
Idade: 48, Nome: Gabriela_Santos
Idade: 49, Nome: Monica_Pereira
Idade: 50, Nome: Nuno_Ferreira
Idade: 51, Nome: Jorge_Ribeiro
Idade: 52, Nome: Fernando_Costa
Idade: 53, Nome: Otavia_Sousa
Idade: 54, Nome: Leonardo_Martins
Idade: 55, Nome: Henrique_Silva

=== BUSCA  ===
Idade 45 não encontrada!

Programa finalizado com sucesso.*/

TABPNo* Busca(TABPNo* root, int age) {
    if (root == NULL || root->age == age) {
        return root;
    }
    if (age < root->age) {
        return Busca(root->left, age);
    } else {
        return Busca(root->right, age);
    }
}

/*QUESTÃO 4

Sistema para Ordenação e Busca de Dados Pessoais - SOBP
Suponha que você compõe a equipe de desenvolvimento de um sistema em C para gerenciar dados pessoais (Nome e Idade) - SOBP. O SOBP se baseia em dois tipos de dado: TPessoa e TABPNo e possui quatro rotinas principais: AlocaNo (realiza alocação de um nó em uma Árvore Binária de Busca (ABP)), PrintRelatorio (gera um relatório por ordem de Idade), Busca (faz a busca de uma idade na ABP) e DesalocaABP  (desaloca todos os nós da ABP), conforme detalhado abaixo.

//Estrutura dos registros do dataset de pessoas
typedef struct {
    char name[100];
    int age;
} TPessoa;

// Estrutura do nó da árvore ABP:
//Esta ABP tem valores menores à esquerda da raíz e valores maiores à direita da raiz.  
typedef struct TABPNo {
int age;
int index; // Posição no dataset de pessoas
struct TABPNo *left;
struct TABPNo *right;
} TABPNo;

O analista de testes da equipe montou um programa (função main() abaixo) para testar todas as funcionalidades do SOBP em diferentes fontes de dado que ele elaborou:

int main() {
TABPNo* No, root;
int Idade, QtNosDesalocados;
char FonteDados;
 //Definição de qual fonte de dados será testada. Veja nos exemplos de entrada de dados:
scanf("%c", &FonteDados); 
//Aloca vários nós contendo idade e posição do dataset (veja tipo TABPNo) à árvore ABP :
root = Fill(FonteDados); 
scanf("%d", &Idade);  //Idade usada no teste de busca. Veja nos exemplos de entrada de dados.
PrintRelatorio(root); //Imprime um relatório por ordem de Idade. Veja nos exemplos de saída.
No = Busca(root, Idade); //Função de busca de uma idade na ABP
QtNosDesalocados = DesalocaABP(root); //Função para desalocar ABP e retornar a qt de nós desalocados
return 0;
}

Você está encarregado de desenvolver a função DesalocaABP, conforme códigos abaixo.

int DesalocaABP(TABPNo* root)
{
SEU CÓDIGO VAI AQUI!
}

Requisitos da função DesalocaABP:
R1. Desalocar todos os nós da ABP e retornar a quantidade de nós desalocados. 

Em suma, sua tarefa é postar o código da função int DesalocaABP(TABPNo* root). As outras funções do SOBP estão prontas, uma vez que você concluir esta função, o programa de testes será executado corretamente e gerará saídas conforme os exemplos apresentados.

POSTE APENAS O CÓDIGO DA FUNÇÃO REQUERIDA. NÃO POSTE NADA A MAIS (main, includes ou outro código qualquer).

For example:
Input 	Result

A 21

	

=== RELATORIO  ===
Idade: 18, Nome: Diana_Pereira
Idade: 19, Nome: Bruno_Santos
Idade: 20, Nome: Fatima_Ribeiro
Idade: 21, Nome: Igor_Sousa
Idade: 22, Nome: Ana_Silva
Idade: 23, Nome: Eduardo_Costa
Idade: 24, Nome: Julia_Ferreira
Idade: 25, Nome: Carlos_Oliveira

=== BUSCA  ===
Encontrado: Igor_Sousa

Programa finalizado com sucesso.

D 45

	

=== RELATORIO  ===
Idade: 46, Nome: Isabel_Oliveira
Idade: 47, Nome: Kelly_Almeida
Idade: 48, Nome: Gabriela_Santos
Idade: 49, Nome: Monica_Pereira
Idade: 50, Nome: Nuno_Ferreira
Idade: 51, Nome: Jorge_Ribeiro
Idade: 52, Nome: Fernando_Costa
Idade: 53, Nome: Otavia_Sousa
Idade: 54, Nome: Leonardo_Martins
Idade: 55, Nome: Henrique_Silva

=== BUSCA  ===
Idade 45 não encontrada!

Programa finalizado com sucesso.*/

