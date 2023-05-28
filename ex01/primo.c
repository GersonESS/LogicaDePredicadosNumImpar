#include <stdio.h>
#include <stdbool.h>

bool eh_primo(int n) {
    if (n <= 1) return false;
    for (int k = 2; k < n; k++) {
        if (n % k == 0) return false;
    }
    return true;
}

int main(void) {
    int limite;
    printf("Digite o limite: ");
    scanf("%d", &limite);
    printf("Números primos até %d: ", limite);
    for (int n = 2; n <= limite; n++) {
        if (eh_primo(n)) {
            printf("%d ", n);
        }
    }
    printf("\n");
    return 0;
}
/*
programa em c para imprimir os numeros primos ate um numero dado qualquer
A expressão lógica que corresponde ao programa

∀x ∈ N, (2 ≤ x ≤ Limite → Primo(x) → Imprime(x))

Esta expressão usa a notação de lógica de primeira ordem para afirmar que para todo x pertencente 
aos números naturais (N), se x estiver entre 2 e o limite dado (Limite), e se x for primo (Primo(x)), 
então x é impresso (Imprime(x))

*/