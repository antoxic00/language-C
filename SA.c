//Situação de premdizagem: Calculo de orçamento
//Professor: Edmar
//Autor(a): Antonio Carlos
//15/07/23

#include <stdio.h>

// Definição dos códigos para os profissionais
#define CADISTA 1
#define FIRMWARE 2
#define HARDWARE 3
#define FIRMWARE_MOBILE 4

// Valores das horas por profissional
#define VALOR_CADISTA 50.0
#define VALOR_FIRMWARE 100.0
#define VALOR_HARDWARE 120.0
#define VALOR_FIRMWARE_MOBILE 100.0

// Valores dos descontos
#define DESCONTO_1 0.05
#define DESCONTO_2 0.1
#define DESCONTO_3 0.15

// Taxa de ICMS
#define ICMS 0.18

// Função para calcular o valor do orçamento
float calcularvalororcamento(int profissional, int horas) {
    float valorhora = 0;

    // Verifica o código do profissional e atribui o valor da hora correspondente
    if (profissional == CADISTA) {
        valorhora = VALOR_CADISTA;
    }
    else if (profissional == FIRMWARE || profissional == FIRMWARE_MOBILE) {
        valorhora = VALOR_FIRMWARE;
    }
    else if (profissional == HARDWARE) {
        valorhora = VALOR_HARDWARE;
    }
    else {
        printf("Profissional invalido!\n");
    }

    // Calcula o valor do projeto, desconto, valor final e imposto
    float valorprojeto = valorhora * horas;
    float valordesconto = 0;

    if (valorprojeto > 3000) {
        valordesconto = valorprojeto * DESCONTO_3;
    }
     else if (valorprojeto > 2000) {
        valordesconto = valorprojeto * DESCONTO_2;
    }
     else if (valorprojeto > 1000) {
        valordesconto = valorprojeto * DESCONTO_1;
    }

    float valorfinal = valorprojeto - valordesconto;
    float valorimposto = valorfinal * ICMS;

    // Imprime os valores do orçamento
    printf("Custo sem desconto: R$ %.2f\n", valorprojeto);
    printf("Custo com desconto: R$ %.2f\n", valorfinal);
    printf("Valor pago em imposto: R$ %.2f\n", valorimposto);
    printf("Desconto recebido: R$ %.2f\n", valordesconto);

    return valorfinal;
}

void main(void) {
    int profissional, horas;
    float valortotal = 0;
    int opcao;

    // Loop infinito do menu
while (1) {
        printf("----------------------------------------");
        printf("\n                MENU\n");
        printf("----------------------------------------\n");
        printf("1 - Cadista\n");
        printf("2 - Desenvolvedor de firmware\n");
        printf("3 - Desenvolvimento de hardware\n");
        printf("4 - Desenvolvedor de firmware mobile\n");
        printf("5 - Finalizar\n");
        printf("----------------------------------------\n");
        printf(" Digite uma das opcoes acima: ");
        scanf("%d", &opcao);

        //se a opção for selecionada finaliza o código
    if (opcao == 5) {
            break;
        }

        printf("Informe a quantidade de horas: ");
        scanf("%d", &horas);

        // Calcula o do orçamento e guarda no valor total
    float valororcamento = calcularvalororcamento(opcao, horas);
        valortotal += valororcamento;
    }

    printf("\nValor total de todos os projetos: R$ %.2f\n", valortotal);
}
