#include <stdio.h>

int main() {
    double num1, num2;
    double soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro n�mero: ");
    scanf("%lf", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%lf", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;

    if (num2 != 0) {
        divisao = num1 / num2;
    } else {
        printf("Erro: divis�o por zero.\n");
        divisao = 0;
    }

    printf("\nDados iniciais: num1 = %.2lf, num2 = %.2lf\n", num1, num2);
    printf("soma = %.2lf\n", soma);
    printf("subtra��o = %.2lf\n", subtracao);
    printf("multiplica��o = %.2lf\n", multiplicacao);
    printf("divis�o = %.2lf\n", divisao);

    return 0;
}
