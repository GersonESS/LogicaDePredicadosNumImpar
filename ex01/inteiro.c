#include <stdio.h>

int main(void) {
    int n = 5;
    int m = 2 * n;
    printf("Para n = %d, existe m = %d tal que m = 2 * n\n", n, m);
    return 0;
}
/*
faca um programa em C para esta expressao 
∀n ∈ N, ∃m ∈ N : m = 2 * n
Este programa define duas variáveis inteiras n e m. A variável n é inicializada com o valor 5 e a variável m é calculada como o dobro de n. O programa então imprime uma mensagem mostrando os valores de n e m e afirmando que para o valor de n, existe um valor de m tal que m é igual ao dobro de n.

Isso corresponde à lógica expressa na expressão de primeira ordem fornecida, que afirma que para todo n pertencente aos números naturais, existe um m pertencente aos números naturais tal que m é igual ao dobro de n.

*/