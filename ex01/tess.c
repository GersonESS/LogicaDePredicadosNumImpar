


#include <stdio.h> 
#include <math.h>
#include <locale.h>
int main(void) {     
    int n = 0; //n � o n�mero a ser verificado 
    int i = 0; 
    int primo = 1; 
    setlocale(LC_ALL, "Portuguese_Brazil"); 
    printf("Digite um numero inteiro positivo: "); 
    scanf("%d", &n);     
if (n > 1) { 
    for (i = 2; i <= sqrt(n); i++) 
    {  
        if (n % i == 0) 
        { //se for, ent�o n n�o � primo 
            primo = 0;
            break; 
            //sai do la�o 
         }
    } 
            //verifica o valor da vari�vel primo 
               
            if (primo == 1) 
            { 
                //se for verdadeiro, imprime que n � primo 
                printf("%d ent�o � primo.\n", n); 
            } else { 
                    //se for falso, imprime que n n�o � primo 
                    printf("%d n�o � primo a .\n", n); 
                    } 
                    }
                     else 
                        { //se n n�o for maior que 1, imprime que n n�o � primo 
                        printf("%d n�o � primo.\n", n);     
                        }
    return 0;
     }