

#include <stdio.h>
#include <locale.h>
//iso 8859-1
int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Aten��o\n");
    printf("� importante usar acentos corretamente.\n");
    return 0;
     }
