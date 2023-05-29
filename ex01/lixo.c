#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    float distance, time, pace;
    printf("Digite a distância percorrida (em quilômetros): ");
    scanf("%f", &distance);
    printf("Digite o tempo gasto (em minutos): ");
    scanf("%f", &time);
    pace = time / distance;
    printf("Seu pace é %.2f minutos por quilômetro.\n", pace);
    return 0;
}