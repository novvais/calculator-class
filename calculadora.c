#include <stdio.h>

void soma() {
    float n1, n2, r1;

    printf("Rotina de Adicao \n");

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    r1 = n1 + n2;

    printf("A soma e: %f \n", r1);
}

void subtracao() {
    float n1, n2, r2;

    printf("Rotina de Subtracao \n");

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    r2 = n1 - n2;

    printf("A subtracao e: %f \n", r2);
}

void multiplicacao() {
    float n1, n2, r3;

    printf("Rotina de Multiplicacao \n");

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    r3 = n1 * n2;

    printf("A multiplicacao e: %f \n", r3);
}

void divisao() {
    float n1, n2, r4;

    printf("Rotina de Divisao \n");

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    if(n1 == 0 || n2 == 0) {
        printf("O valor digitado nao pode ser dividido!");
    } else {
        r4 = n1 / n2;

        printf("A divisao e: %f \n", r4);
    }
}

int opcao;

int main() {
    do {
        printf("[1] - Adicao \n");
        printf("[2] - Subtracao \n");
        printf("[3] - Multiplicacao \n");
        printf("[4] - Divisao \n");
        printf("[5] - Sair \n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                soma();
            break;
            case 2:
                subtracao();
            break;
            case 3:
                multiplicacao();
            break;
            case 4:
                divisao();
            break;
            default:
                printf("Opcao invalida - Tente novamente.");
        break;
        }
    } while (opcao != 5);

}