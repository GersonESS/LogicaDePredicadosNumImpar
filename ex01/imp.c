#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool eh_primo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main(void) {
    int n = 7;
    printf("∀x(x > 1 ∧ ¬∃y(y > 1 ∧ y ≤ √x ∧ x mod y = 0)) → x é primo\n");
    printf("%d é primo? %s\n", n, eh_primo(n) ? "Sim" : "Não");
    return 0;
}