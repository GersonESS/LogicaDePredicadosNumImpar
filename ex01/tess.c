


#include <stdio.h> 
#include <math.h>
#include <locale.h>
int main(void) {     
    int n = 0; //n é o número a ser verificado 
    int i = 0; 
    int primo = 1; 
    setlocale(LC_ALL, "Portuguese_Brazil"); 
    printf("Digite um numero inteiro positivo: "); 
    scanf("%d", &n);     
if (n > 1) { 
    for (i = 2; i <= sqrt(n); i++) 
    {  
        if (n % i == 0) 
        { //se for, então n não é primo 
            primo = 0;
            break; 
            //sai do laço 
         }
    } 
            //verifica o valor da variável primo 
               
            if (primo == 1) 
            { 
                //se for verdadeiro, imprime que n é primo 
                printf("%d então é primo.\n", n); 
            } else { 
                    //se for falso, imprime que n não é primo 
                    printf("%d não é primo a .\n", n); 
                    } 
                    }
                     else 
                        { //se n não for maior que 1, imprime que n não é primo 
                        printf("%d não é primo.\n", n);     
                        }
    return 0;
     }