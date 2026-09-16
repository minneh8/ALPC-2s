#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>


struct Operacao {
    int id;
    int opr;
    int cdgOperacao;
    float valor;
    char label[100];
    char descricao[100];
};

struct Operacao operacao[100];
int cont = 0;

void cadastroOperacao() {
    operacao[cont].id = cont;
    printf("Cadastro %d:\n", cont);
    printf("Digite o tipo de operação (1 - Deposito ou entrada de valores  /  0 - Retirada ou pagamento): ");
    scanf("%d", &operacao[cont].opr);
    printf("Digite o código da operação (0 - Despesas obrigatórias / 1 - Depósitos / 2 - Pagamentos por despesas não obrigatórias): ");
    scanf("%d", &operacao[cont].cdgOperacao);
    printf("Digite o valor: ");
    scanf("%f", &operacao[cont].valor);
    printf("Digite a label: ");
    scanf("%s", operacao[cont].label);
    printf("Digite a descrição: ");
    scanf("%s", operacao[cont].descricao);
    cont++;
}

void salvarArquivo() {
    char buffer[100];
    FILE *arquivo;
    arquivo = fopen("operacoes.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    for (int i = 0; i < cont; i++) {
        fprintf(
            arquivo,
            "Tipo da Operacao: %d \n
            Código da Operacao: %d \n
            Valor: %.2f \n
            Label: %s \n
            Descricao: %s\n",

            operacao[i].id,
            operacao[i].opr,
            operacao[i].cdgOperacao,
            operacao[i].valor,
            operacao[i].label,
            operacao[i].descricao
        );
    }

    fclose(arquivo);

    printf("Arquivo salvo com sucesso!\n");
}


void main()
{
    cadastroOperacao();
    salvarArquivo();
}