#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    float distance, pace;
    int minutes, seconds;
    printf("Digite a distância percorrida (em quilômetros): ");
    scanf("%f", &distance);
    printf("Digite o tempo gasto (em minutos): ");
    scanf("%d:", &minutes);
    printf("Digite o tempo gasto (em segundos): ");
    scanf("%d:", &seconds);
    float time = minutes + (seconds / 60.0);
    pace = time / distance;
    printf("Seu pace é %.2f minutos por quilômetro.\n", pace);
    return 0;
}