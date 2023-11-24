#include <stdio.h>

int main() {
    // VariÃ¡veis para armazenar os dados do emprÃ©stimo
    float principal, taxaDeJuros, juros, tempo;

    // Solicita ao usuÃ¡rio que insira o principal, a taxa de juros e o tempo
    printf("Insira o valor do emprestimo (Principal): ");
    scanf("%f", &principal);

    printf("Insira a taxa de juros (em porcentagem): ");
    scanf("%f", &taxaDeJuros);

    printf("Insira o tempo do emprestimo (em anos): ");
    scanf("%f", &tempo);

    // Calcula os juros simples
    juros = principal * taxaDeJuros * tempo / 100.0;

    // Exibe o resultado
    printf("\nO valor dos juros : %.2f\n", juros);

    return 0;
}