#include <stdio.h>
#include <math.h>

int main(void) {
    int x;
    printf("Digite um valor para x: ");
    scanf("%d", &x);
    int y = sqrt(x);
    if (y * y == x) {
        printf("Verdadeiro: para x = %d, existe y = %d tal que x = y * y\n", x, y);
    } else {
        printf("Falso: não existe um valor inteiro de y tal que x = y * y para x = %d\n", x);
    }
    return 0;
}
/*
Aqui está um programa em C que implementa a lógica expressa na expressão de primeira ordem fornecida anteriormente e verifica se o resto da raiz quadrada de x é igual a 0:

∀x ∈ N, ∃y ∈ N : (y * y = x) ↔ Verdadeiro(x)
Programa em C:

#include <stdio.h>
#include <math.h>

int main(void) {
    int x;
    printf("Digite um valor para x: ");
    scanf("%d", &x);
    int y = sqrt(x);
    if (y * y == x) {
        printf("Verdadeiro: para x = %d, existe y = %d tal que x = y * y\n", x, y);
    } else {
        printf("Falso: não existe um valor inteiro de y tal que x = y * y para x = %d\n", x);
    }
    return 0;
}
Este programa define duas variáveis inteiras x e y. Ele pede ao usuário para digitar um valor para x e armazena o valor digitado na variável x. Em seguida, calcula o valor de y como a raiz quadrada de x. O programa verifica se o quadrado de y é igual a x. Se for igual, imprime uma mensagem afirmando que para o valor de x, existe um valor de y tal que x é igual ao quadrado de y. Caso contrário, imprime uma mensagem afirmando que não existe um valor inteiro de y tal que x seja igual ao quadrado de y.

Isso corresponde à lógica expressa na expressão de primeira ordem fornecida, que afirma que para todo x pertencente aos números naturais, existe um y pertencente aos números naturais tal que x é igual ao quadrado de y.
*/