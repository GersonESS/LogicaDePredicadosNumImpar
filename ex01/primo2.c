#include <stdio.h>
#include <stdbool.h>

bool eh_primo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main(void) {
    int n = 7;
    printf("∀x(x > 1 ∧ ¬∃y(y > 1 ∧ y < x ∧ x mod y = 0)) → x é primo\n");
    printf("%d é primo? %s\n", n, eh_primo(n) ? "Sim" : "Não");
    return 0;
}
/*
Para expressar a lógica do programa em termos de lógica de primeira ordem, podemos definir um predicado 
em lógica de primeira ordem, digamos "Primo(x)", que representa a propriedade de um número ser primo.

Aqui está a expressão da lógica do programa em termos de lógica de primeira ordem:

Primo(n): representa que o número n é primo.
¬Primo(n): representa que o número n não é primo.
∀n (Primo(n) ↔ (∀i (2 ≤ i < n → (n mod i ≠ 0))))
Essa expressão diz que um número n é primo se, e somente se, para todo i, onde 2 é menor ou igual a i 
e i é estritamente menor que n, o resto da divisão de n por i é diferente de zero.

Essa expressão em lógica de primeira ordem representa a lógica do programa em C que verifica se um 
número é primo. Vale ressaltar que essa é uma representação simbólica da lógica e não pode ser 
diretamente executada como um programa em C. 
A lógica de primeira ordem é uma linguagem formal usada para expressar proposições e predicados em 
termos matemáticos, mas não é diretamente transponível para a linguagem de programação C.






Regenerate response
Send a message.

Free Research Preview. ChatGPT may produce inaccurate information about people, places, or facts. ChatGPT May 12 Ver
*/