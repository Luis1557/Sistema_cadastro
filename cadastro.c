#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CADASTROS 100 // Definindo o limite máximo de cadastros

// Estrutura para armazenar os dados de uma pessoa
typedef struct {
    char nome[50];
    int idade;
    char cpf[12];
} Pessoa;

// Função para adicionar um novo cadastro
void adicionarCadastro(Pessoa* cadastros, int* tamanho) {
    if (*tamanho >= MAX_CADASTROS) {
        printf("Limite de cadastros atingido. Nao e possivel adicionar mais pessoas.\n");
        return;
    }

    // Solicita os dados da nova pessoa
    printf("Digite o nome: ");
    scanf(" %[^\n]", cadastros[*tamanho].nome);
    printf("Digite a idade: ");
    scanf("%d", &cadastros[*tamanho].idade);
    printf("Digite o CPF: ");
    scanf(" %s", cadastros[*tamanho].cpf);

    (*tamanho)++; // Incrementa o tamanho do array
    printf("Cadastro adicionado com sucesso!\n");
}

// Função para listar todos os cadastros
void listarCadastros(Pessoa* cadastros, int tamanho) {
    if (tamanho == 0) {
        printf("Nenhum cadastro encontrado.\n");
        return;
    }

    printf("\n=== Lista de Cadastros ===\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Indice: %d\n", i);
        printf("Nome: %s\n", cadastros[i].nome);
        printf("Idade: %d\n", cadastros[i].idade);
        printf("CPF: %s\n", cadastros[i].cpf);
        printf("---------------------------\n");
    }
}

// Função para deletar um cadastro pelo índice
void deletarCadastro(Pessoa* cadastros, int* tamanho, int indice) {
    if (indice < 0 || indice >= *tamanho) {
        printf("Indice invalido!\n");
        return;
    }

    // Move os elementos para preencher o espaço do elemento removido
    for (int i = indice; i < *tamanho - 1; i++) {
        cadastros[i] = cadastros[i + 1];
    }

    (*tamanho)--; // Decrementa o tamanho do array
    printf("Cadastro deletado com sucesso!\n");
}

int main() {
     Pessoa* cadastros = (Pessoa*)malloc(MAX_CADASTROS * sizeof(Pessoa));
     if (cadastros == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
     }

    int tamanho = 0; // Número de cadastros atuais

    int opcao;
    do {
        printf("\n=== Sistema de Cadastro ===\n");
        printf("1. Adicionar Cadastro\n");
        printf("2. Listar Cadastros\n");
        printf("3. Deletar Cadastro\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarCadastro(cadastros, &tamanho);
                break;
            case 2:
                listarCadastros(cadastros, tamanho);
                break;
            case 3: {
                int indice;
                printf("Informe o indice do cadastro a deletar: ");
                scanf("%d", &indice);
                deletarCadastro(cadastros, &tamanho, indice);
                break;
            }
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 4);

    free(cadastros);

    return 0;
}