#include <stdio.h>

int main() {
    // Declaração de variáveis do tipo real (float)
    float peso, altura, resultado_imc;

    printf("--- Sistema de Avaliacao Fisica: Calculo de IMC ---\n\n");

    // Coleta de dados com orientação ao usuário
    printf("Digite o seu peso em quilos : ");
    scanf("%f", &peso);

    printf("Digite a sua altura em metros : ");
    scanf("%f", &altura);

    // Realização do cálculo matemático
    // A fórmula IMC = peso / altura²
    resultado_imc = peso / (altura * altura);

    // Saída formatada com duas casas decimais (%.2f)
    printf("\nO IMC calculado do aluno e: %.2f\n", resultado_imc);
    printf("--------------------------------------------------\n");

    return 0;
}
