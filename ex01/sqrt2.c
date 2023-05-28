#include <stdio.h>
#include <math.h>

int main(void) {
    int x;
    printf("Digite um valor para x: ");
    scanf("%d", &x);
    int y = sqrt(x);
    printf("Para x = %d, existe y = %d tal que x = y * y\n", x, y);
    return 0;
}
/*
Expressão de primeira ordem: ∀x ∈ N, ∃y ∈ N : x = y * y


Este programa define duas variáveis inteiras x e y. Ele pede ao usuário para digitar um valor para x e armazena o valor digitado na variável x. Em seguida, calcula o valor de y como a raiz quadrada de x. O programa então imprime uma mensagem mostrando os valores de x e y e afirmando que para o valor de x, existe um valor de y tal que x é igual ao quadrado de y.

Isso corresponde à lógica expressa na expressão de primeira ordem fornecida, que afirma que para todo x pertencente aos números naturais, existe um y pertencente aos números naturais tal que x é igual ao quadrado de y.
*/