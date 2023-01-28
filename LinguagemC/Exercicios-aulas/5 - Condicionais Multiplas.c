#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    int a = 10;

    //CONECTIVO LOGICO E/AND
    //Para usar está expressão use o &&.
    if (a > 5 && a < 15){
        printf("\n A variável 'a' está entre 5 e 15.");
    }

    //CONECTIVO LOGICO OU/OR
    //Para usar está expressão use o ||(pipe).
    if (a > 5 || a < 15){
        printf("\n A variável 'a' é maior 5 ou 15.");
    }

    //CONECTIVO LOGICO MISTURADOS
    //Para usar está expressão use o &&.
    if ((a > 5 && a < 15) || a == 20){
        printf("\n A variável 'a' está entre 5 e 15 ou ela vale 20.");
    }

}
