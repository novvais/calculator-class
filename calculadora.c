#include <stdio.h>

void soma() {
    int n1, n2, r1;

    printf("Rotina de Adição");

    printf("Digite o primeiro numero:");
    scanf("%d", &n1);

    printf("Digite o segundo numero:");
    scanf("%d", &n2);

    r1 = n1 + n2;

    printf("A soma e: %d", r1);
}

void subtracao() {
    int n1, n2, r2;

    printf("Rotina de Adição");

    printf("Digite o primeiro numero:");
    scanf("%d", &n1);

    printf("Digite o segundo numero:");
    scanf("%d", &n2);

    r2 = n1 - n2;

    printf("A subtracao e: %d", r2);
}

void multiplicacao() {
    int n1, n2, r3;

    printf("Rotina de Adição");

    printf("Digite o primeiro numero:");
    scanf("%d", &n1);

    printf("Digite o segundo numero:");
    scanf("%d", &n2);

    r3 = n1 * n2;

    printf("A multiplicacao e: %d", r3);
}

void divisao() {
    int n1, n2, r4;

    printf("Rotina de Adição");

    printf("Digite o primeiro numero:");
    scanf("%d", &n1);

    printf("Digite o segundo numero:");
    scanf("%d", &n2);

    if(n1 == 0 || n2 == 0) {
        printf("O valor digitado nao pode ser dividido!");
    } else {
        r4 = n1 / n2;

        printf("A divisao e: %d", r4);
    }
}

int main() {
    

    switch ()
    {
    case 1:

        break;
    case 2:
    default:
        break;
    }
}