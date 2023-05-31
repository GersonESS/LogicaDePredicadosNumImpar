#include <stdio.h>

int main() {
    int minutos, segundos;
    float minutosDecimal;
    char formato[6];

    printf("Digite o tempo no formato 99:99: ");
    scanf("%5s", formato);

    sscanf(formato, "%d:%d", &minutos, &segundos);

    minutosDecimal = minutos + segundos / 60.0;

    printf("O valor em minutos decimais é: %.2f\n", minutosDecimal);

    return 0;
}