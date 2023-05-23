
//Este programa verifica se um número é primo ou não 
#include <stdio.h> 
#include <math.h>

int main(void) { 
    int n; 
    //n é o número a ser verificado 
    int i; 
    //i é uma variável auxiliar 
    int primo = 1; 
    //primo é uma variável lógica que indica se n é primo ou não

    printf("Digite um número inteiro positivo: "); 
    scanf("%d", &n);
     //lê o valor de n

    //verifica se n é maior que 1 
    if (n > 1) { 
        //percorre todos os números entre 2 e a raiz quadrada de n 
        for (i = 2; i <= sqrt(n); i++) { 
            //verifica se n é divisível por i 
            if (n % i == 0) {
                 //se for, então n não é primo 
                 primo = 0; 
                 break; //sai do laço 
                 } 
                 } 
                 //verifica o valor da variável primo 
                 if (primo == 1) 
                    { 
                    //se for verdadeiro, imprime que n é primo 
                    printf("%d é primo.\n", n); 
                    } else 
                    { 
                        //se for falso, imprime que n não é primo 
                        printf("%d não é primo.\n", n); } 
                        } else { 
                            //se n não for maior que 1, imprime que n não é primo 
                            printf("%d não é primo.\n", n); }

return 0; }