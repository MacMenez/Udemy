#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    int cont; // i pode ser chamado de cont ou contador.

    //CONTAR ATÉ 10
    /*for(cont = 1; cont <= 10; cont++){
        printf("\n %d", cont);
    }*/

    for(cont = 1; cont <= 10; cont++){
        printf("\n 5 X %d = %d", cont, 5 * cont);
    }
}
