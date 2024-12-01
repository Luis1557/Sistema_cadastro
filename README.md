# Sistema_cadastro

## Sistema de Cadastro de Pessoas

Este é um simples sistema de cadastro de pessoas em C, que permite adicionar, listar e deletar cadastros. O sistema utiliza uma estrutura de dados para armazenar informações de pessoas, como nome, idade e CPF.

## Funcionalidades
- Adicionar Cadastro: Permite ao usuário inserir um novo cadastro com nome, idade e CPF.
- Listar Cadastros: Exibe todos os cadastros inseridos até o momento.
- Deletar Cadastro: Remove um cadastro baseado no índice informado pelo usuário.
- Limite de Cadastros: O sistema suporta até 100 cadastros.
  
## Como Compilar e Executar

Para compilar e executar o programa, siga os passos abaixo:

### Pré-requisitos
Certifique-se de ter um compilador C instalado, como o GCC. Você pode verificar se o GCC está instalado executando o seguinte comando no terminal:

```bash
gcc --version
```

### Passo a Passo
Clone o repositório (ou crie um arquivo .c com o código fornecido):

```bash
git clone https://github.com/Luis1557/Sistema_cadastro.git 
cd Sistema_cadastro
```

Ou crie um arquivo chamado cadastro.c e cole o código fornecido.

### Compile o código:

```bash
gcc -o cadastro cadastro.c
```

### Execute o programa:

```bash
./cadastro
```

### Uso do Programa

Após executar o programa, você verá um menu com as opções disponíveis.
Escolha uma opção digitando o número correspondente e pressionando Enter.
Siga as instruções exibidas na tela para adicionar, listar ou deletar cadastros.
Para sair do programa, selecione a opção 4.

### Observações
O programa aloca dinamicamente memória para armazenar os cadastros. Certifique-se de que a memória seja liberada corretamente ao final da execução.
O CPF deve ser inserido sem caracteres especiais e deve ter exatamente 11 dígitos (sem o dígito verificador).

### Execução do programa:


