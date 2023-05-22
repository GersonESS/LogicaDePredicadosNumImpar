

#include <stdio.h> 
#include <math.h>
#include <locale.h>
int main(void) {     
    int n = 0; //n é o número a ser verificado 
    int i = 0; 
   // int primo = 1;
    int prim = 1; 
    setlocale(LC_ALL, "Portuguese");
//i é uma variável auxiliar  
//primo é uma variável lógica que indica se n é primo ou não
    printf("Digite um numero inteiro positivo: "); 
   // printf("Digite um número inteiro positivo: ");
 //verifica se n é maior que 1 
    scanf("%d", &n);
        
if (n > 1) { //percorre todos os números entre 2 e a raiz quadrada de n 
    for (i = 2; i <= sqrt(n); i++) 
    { 
        //verifica se n é divisível por i 
        if (n % i == 0) 
        { //se for, então n não é primo 
            primo = 0; break; 
            //sai do laço } } //verifica o valor da variável primo 
            /*   
            if (primo == 1) 
            { 
                //se for verdadeiro, imprime que n é primo 
                printf("%d é primo.\n", n); } else { 
                    //se for falso, imprime que n não é primo 
                    printf("%d não é primo.\n", n); } } else 
                    { //se n não for maior que 1, imprime que n não é primo 
                    */
                    printf("%d não é primo.\n", n); 
                  //  }
    return 0;
     }