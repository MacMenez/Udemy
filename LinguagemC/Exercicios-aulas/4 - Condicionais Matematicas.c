#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    int a = 5, b = 10, c = 15;
    char d = 'x';

    //MAIOR
    if(a > 2){
        printf("\n %d é maior que 2", a);
    }

    //MAIOR OU IGUAL
    if(c >= b){
        printf("\n %d é maior ou igual a %d", c, b);
    }

    //MENOR
    if(a < 10){
        printf("\n %d é menor que 10", a);
    }

    //MENOR OU IGUAL
    if(a <= 10){
        printf("\n %d é menor ou igual a 10", a);
    }

    //DIFERENTE
    if(c != 10){
        printf("\n %d é não é 10", c);
    }

    if(d != 'a'){
        printf("\n %c é não é a", d);
    }

}
