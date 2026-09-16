#include <stdio.h>
#include <string.h>
#include <stdlib.h>



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

void exibirOperacoes() {
    printf("Operações cadastradas:\n");
    for (int i = 0; i < cont; i++) {
        printf("ID: %d\n", operacao[i].id);
        printf("Tipo da Operacao: %d\n", operacao[i].opr);
        printf("Código da Operacao: %d\n", operacao[i].cdgOperacao);
        printf("Valor: %.2f\n", operacao[i].valor);
        printf("Label: %s\n", operacao[i].label);
        printf("Descricao: %s\n\n", operacao[i].descricao);
    }
}

void exibirOperacaoPorLabel(char *label) {
    printf("Digite o label de pesquisa: ");
    scanf("%s", label);
    for (int i = 0; i < cont; i++) {
        if (strcmp(operacao[i].label, label) == 0) {
            printf("ID: %d\n", operacao[i].id);
            printf("Tipo da Operacao: %d\n", operacao[i].opr);
            printf("Código da Operacao: %d\n", operacao[i].cdgOperacao);
            printf("Valor: %.2f\n", operacao[i].valor);
            printf("Label: %s\n", operacao[i].label);
            printf("Descricao: %s\n\n", operacao[i].descricao);
            return;
        }
    }
    printf("Operação com label %s não encontrada.\n", label);
}

void exibirOperacaoPorCodigo(int codigo) {
    printf("Digite o código de pesquisa: ");
    scanf("%d", &codigo);
    for (int i = 0; i < cont; i++) {
        if (operacao[i].cdgOperacao == codigo) {
            printf("ID: %d\n", operacao[i].id);
            printf("Tipo da Operacao: %d\n", operacao[i].opr);
            printf("Código da Operacao: %d\n", operacao[i].cdgOperacao);
            printf("Valor: %.2f\n", operacao[i].valor);
            printf("Label: %s\n", operacao[i].label);
            printf("Descricao: %s\n\n", operacao[i].descricao);
            return;
        }
    }
    printf("Operação com código %d não encontrada.\n", codigo);
}

void consultarSaldo() {
    float saldo = 0.0;
    for (int i = 0; i < cont; i++) {
        if (operacao[i].opr == 1) { // Depósito ou entrada de valores
            saldo += operacao[i].valor;
        } else if (operacao[i].opr == 0) { // Retirada ou pagamento
            saldo -= operacao[i].valor;
        }
    }
    printf("Saldo atual: %.2f\n", saldo);
}

void exibirOperacoesPorTipo(int tipo) {
    printf("Digite o tipo de operação (1 - Deposito ou entrada de valores  /  0 - Retirada ou pagamento): ");
    scanf("%d", &tipo);
    printf("Operações do tipo %d:\n", tipo);
    for (int i = 0; i < cont; i++) {
        if (operacao[i].opr == tipo) {
            printf("ID: %d\n", operacao[i].id);
            printf("Tipo da Operacao: %d\n", operacao[i].opr);
            printf("Código da Operacao: %d\n", operacao[i].cdgOperacao);
            printf("Valor: %.2f\n", operacao[i].valor);
            printf("Label: %s\n", operacao[i].label);
            printf("Descricao: %s\n\n", operacao[i].descricao);
        }
    }
}

void alterarDados() {
    int idAltera;
    printf("Digite o ID da operação que deseja alterar: ");
    scanf("%d", &idAltera);

    if (idAltera < 0 || idAltera >= cont) {
        printf("ID inválido.\n");
        return;
    }

    printf("Alterando dados da operação com ID %d:\n", idAltera);
    printf("Digite o novo tipo de operação (1 - Deposito ou entrada de valores  /  0 - Retirada ou pagamento): ");
    scanf("%d", &operacao[idAltera].opr);
    printf("Digite o novo código da operação (0 - Despesas obrigatórias / 1 - Depósitos / 2 - Pagamentos por despesas não obrigatórias): ");
    scanf("%d", &operacao[idAltera].cdgOperacao);
    printf("Digite o novo valor: ");
    scanf("%f", &operacao[idAltera].valor);
    printf("Digite a nova label: ");
    scanf("%s", operacao[idAltera].label);
    printf("Digite a nova descrição: ");
    scanf("%s", operacao[idAltera].descricao);

    printf("Dados alterados com sucesso!\n");
}

void salvarArquivo() {
    FILE *arquivo;
    arquivo = fopen("operacoes.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    for (int i = 0; i < cont; i++) {
        fprintf(arquivo,
            "ID: %d\n"
            "Tipo da Operacao: %d\n"
            "Código da Operacao: %d\n"
            "Valor: %.2f\n"
            "Label: %s\n"
            "Descricao: %s\n\n",
            operacao[i].id,
            operacao[i].opr,
            operacao[i].cdgOperacao,
            operacao[i].valor,
            operacao[i].label,
            operacao[i].descricao);
    }

    fclose(arquivo);

    printf("Arquivo salvo com sucesso!\n");
}


int main() {
    int escolha = -1;
    while (escolha != 9) {
        // Inicialização do sistema
        printf("Bem-vindo ao sistema de gerenciamento de Financas!\n");
        printf("Escolha uma opção:\n");
        printf("1 - Cadastrar operação\n");
        printf("2 - Exibir todas as operações\n");
        printf("3 - Consultar operação por label\n");
        printf("4 - Consultar operação por código\n");
        printf("5 - Exibir operações por tipo\n");
        printf("6 - Consultar saldo\n");
        printf("7 - Alterar dados de uma operação\n");
        printf("8 - Salvar dados em arquivo\n");
        scanf("%d", &escolha);
        getchar(); 
        
        switch (escolha)
        {
        case 1:
            cadastroOperacao();
            break;
        case 2:
            exibirOperacoes();
            break;
        case 3:
            exibirOperacaoPorLabel(operacao[0].label);
            break;
        case 4:
            exibirOperacaoPorCodigo(operacao[0].cdgOperacao);
            break;
        case 5:
            exibirOperacoesPorTipo(operacao[0].opr);
            break;
        case 6:
            consultarSaldo();
            break;
        case 7:
            alterarDados();
            break;
        case 8:
            salvarArquivo();
            break;
        case 9:
            printf("Saindo do sistema...\n");
            break;
        }
    }
}