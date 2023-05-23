

#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "pt_BR.utf8");
    printf("Atenção\n");
    printf("É importante usar acentos corretamente.\n");
    return 0;
     }
