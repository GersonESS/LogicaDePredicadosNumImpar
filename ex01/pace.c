#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    float distance, pace;
    int minutes, seconds;
    printf("Digite a dist�ncia percorrida (em quil�metros): ");
    scanf("%f", &distance);
    printf("Digite o tempo gasto (em minutos): ");
    scanf("%d:", &minutes);
    printf("Digite o tempo gasto (em segundos): ");
    scanf("%d:", &seconds);
    float time = minutes + (seconds / 60.0);
    pace = time / distance;
    printf("Seu pace � %.2f minutos por quil�metro.\n", pace);
    return 0;
}