#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    int a = 1, b = 10;

    //Contando at� 10
    while(a <= 10){
        printf("\n %d", a);

        //OPERA��O DE INCREMENTO
        a ++; //a = a + 1;
    }

    //CONTAGEM REGRESSIVA
    while(b >= 1){
        printf("\n %d", b);

        //OPERA��O DE INCREMENTO
        b--; //b = b - 1;
    }
}
