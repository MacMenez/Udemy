#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    int a = 10;

    //CONECTIVO LOGICO E/AND
    //Para usar est� express�o use o &&.
    if (a > 5 && a < 15){
        printf("\n A vari�vel 'a' est� entre 5 e 15.");
    }

    //CONECTIVO LOGICO OU/OR
    //Para usar est� express�o use o ||(pipe).
    if (a > 5 || a < 15){
        printf("\n A vari�vel 'a' � maior 5 ou 15.");
    }

    //CONECTIVO LOGICO MISTURADOS
    //Para usar est� express�o use o &&.
    if ((a > 5 && a < 15) || a == 20){
        printf("\n A vari�vel 'a' est� entre 5 e 15 ou ela vale 20.");
    }

}
