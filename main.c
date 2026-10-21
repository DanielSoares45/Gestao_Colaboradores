#include <stdio.h>

int main() {
    // Variaveis de controle e acumuladores
    int opcao;
    int operacoesRealizadas = 0; 

    // 1. MENSAGEM INICIAL DE BOAS-VINDAS
    printf("====================================================\n");
    printf("          SISTEMA DE GESTAO DE COLABORADORES        \n");
    printf("====================================================\n\n");
    printf("Ola! Seja muito bem-vindo(a).\n");
    printf("Este sistema foi desenvolvido para organizar as \n");
    printf("informacoes e facilitar o gerenciamento da sua equipe.\n\n");

    // 2. LACO DE REPETICAO DO MENU (ESTADO PERSISTENTE)
    do {
        printf("----------------------------------------------------\n");
        printf("                  MENU PRINCIPAL                    \n");
        printf("----------------------------------------------------\n");
        printf("1. Cadastrar novo colaborador\n");
        printf("2. Listar colaboradores ativos\n");
        printf("3. Atualizar dados do colaborador\n");
        printf("4. Registrar ponto eletronico (Desafio Bonus)\n");
        printf("0. Encerrar sistema\n");
        printf("----------------------------------------------------\n");
        printf("Digite a opcao desejada: ");
        
        // Leitura de dados e limpeza de buffer
        scanf("%d", &opcao);
        while(getchar() != '\n'); 

        // 3. CONTROLE DE FLUXO (ROTEAMENTO)
        switch (opcao) {
            case 1:
                printf("\n[Acao]: Modulo de Cadastro de Colaborador iniciado.\n\n");
                operacoesRealizadas++;
                break;
                
            case 2:
                printf("\n[Acao]: Listando todos os colaboradores ativos...\n\n");
                operacoesRealizadas++;
                break;
                
            case 3:
                printf("\n[Acao]: Modulo de Atualizacao de Dados iniciado.\n\n");
                operacoesRealizadas++;
                break;
                
            case 4:
                // 4. DESAFIO BONUS (COMPLEXIDADE ALGORITMICA)
                printf("\n[Acao]: Registro de Ponto Eletronico.\n");
                {
                    float horasTrabalhadas;
                    printf("Informe a quantidade de horas trabalhadas hoje (ex: 8.5): ");
                    scanf("%f", &horasTrabalhadas);
                    while(getchar() != '\n'); 

                    if (horasTrabalhadas > 8.0) {
                        printf("-> Status: Expediente com HORAS EXTRAS registradas (+%.1f h).\n\n", horasTrabalhadas - 8.0);
                    } else if (horasTrabalhadas < 8.0 && horasTrabalhadas > 0) {
                        printf("-> Status: Atencao, carga horaria INCOMPLETA.\n\n");
                    } else if (horasTrabalhadas == 8.0) {
                        printf("-> Status: Expediente normal de 8 horas cumprido perfeitamente.\n\n");
                    } else {
                        printf("-> Erro: Valor de horas invalido.\n\n");
                    }
                }
                operacoesRealizadas++;
                break;
                
            case 0:
                // Interrompe sem somar operacoes, deixando o laco repassar para o encerramento
                printf("\nPreparando para encerrar os modulos...\n");
                break;
                
            default:
                // 5. TRATAMENTO DE EXCECAO E DADOS INCORRETOS
                printf("\n====================================================\n");
                printf(" [ERRO] Operacao invalida!\n");
                printf(" A opcao digitada nao e reconhecida pelo sistema.\n");
                printf(" Por favor, escolha um numero valido entre 0 e 4.\n");
                printf("====================================================\n\n");
                break;
        }

    } while (opcao != 0);

    // 6. MENSAGEM DE DESPEDIDA E TOTAIS ACUMULADOS
    printf("\n====================================================\n");
    printf("                  SISTEMA ENCERRADO                 \n");
    printf("====================================================\n");
    printf("Sessao finalizada com sucesso (Processo finalizado pelo usuario).\n");
    printf("Resumo de produtividade: %d operacao(oes) realizada(s).\n", operacoesRealizadas);
    printf("Obrigado por utilizar nosso software. Ate a proxima!\n");
    printf("====================================================\n\n");

    return 0;
}