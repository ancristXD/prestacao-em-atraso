#include <stdio.h>

int main() {
    float valor, taxa, prestacao;
    int tempo;

    // Entrada dos dados
    printf("Digite o valor da prestação: ");
    scanf("%f", &valor);

    printf("Digite a taxa de juros (em %%): ");
    scanf("%f", &taxa);

    printf("Digite o tempo de atraso (em meses): ");
    scanf("%d", &tempo);

    // Cálculo da prestação em atraso
    prestacao = valor + (valor * (taxa / 100) * tempo);

    // Exibindo o resultado
    printf("O valor da prestação em atraso é: R$ %.2f\n", prestacao);

    return 0;
}