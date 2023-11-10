#include <stdio.h>

int main() {
    float precoEtiqueta, valorPago;
    int codigoCondicao;

    printf("Digite o preço normal de etiqueta do produto: ");
    scanf("%f", &precoEtiqueta);

    printf("Escolha a condição de pagamento:\n");
    printf("1 - À vista em dinheiro ou PIX (10%% de desconto)\n");
    printf("2 - À vista no cartão de crédito (5%% de desconto)\n");
    printf("3 - Em duas vezes (preço normal de etiqueta sem juros)\n");
    printf("4 - Em três vezes (preço normal de etiqueta com juros de 10%%)\n");
    printf("5 - SAIR\n");
    printf("Digite o codigo da condição de pagamento: ");
    scanf("%d", &codigoCondicao);

    switch (codigoCondicao) {
        case 1:
            valorPago = precoEtiqueta * 0.90;
            break;
        case 2:
            valorPago = precoEtiqueta * 0.95;
            break;
        case 3:
            valorPago = precoEtiqueta;
            break;
        case 4:
            valorPago = precoEtiqueta * 1.10;
            break;
        case 5:
            printf("Saindo do programa.\n");
            return 0;
        default:
            printf("Código de condição de pagamento inválido.\n");
            return 1;
    }

    printf("O valor a ser pago é: %.2f\n", valorPago);

    return 0;
}
