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
/*
Este é um programa em C que verifica se um determinado número é primo ou não. O programa inclui 
três bibliotecas: stdio.h, stdbool.h e math.h. 
A função eh_primo recebe um inteiro n como argumento e retorna um valor booleano indicando 
se o número é primo ou não. Se n for menor ou igual a 1, a função retorna falso. Caso contrário, 
verifica se n é divisível por qualquer número de 2 até a raiz quadrada de n. Se encontrar um divisor, 
retorna falso. Se nenhum divisor for encontrado, retorna verdadeiro.

Na função main, o programa define uma variável inteira n com valor 7. 
Em seguida, imprime uma afirmação em português que diz 
“Para todo x (x > 1 e não existe y (y > 1 e y <= sqrt(x) e x mod y = 0)) implica que x é primo”. 
Depois disso, imprime se n é primo ou não chamando a função eh_primo e passando n como argumento. 
O programa usa um operador ternário para imprimir “Sim” se a função retornar verdadeiro 
e “Não” se retornar falso. 
Finalmente, o programa retorna 0 para indicar execução bem-sucedida.

Aqui está o programa em Portugol:

funcao eh_primo(n: inteiro): logico
inicio
    se (n <= 1) entao
        retorne falso
    fimse
    para i de 2 ate raiz_quadrada(n) faca
        se (n % i == 0) entao
            retorne falso
        fimse
    fimpara
    retorne verdadeiro
fimfuncao

inicio
    n = 7
    escreva("∀x(x > 1 ∧ ¬∃y(y > 1 ∧ y ≤ √x ∧ x mod y = 0)) → x é primo\n")
    escreva(n, " é primo? ", eh_primo(n) ? "Sim" : "Não", "\n")
fim
Este programa em Portugol é equivalente ao programa em C que você forneceu anteriormente. 
Ele define uma função eh_primo que verifica se um número é primo ou não e usa essa função na 
função principal para imprimir se o número n é primo ou não.

Você gostaria de saber mais sobre este programa em Portugol?
*/