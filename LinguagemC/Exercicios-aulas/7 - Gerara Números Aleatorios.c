#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> //

void main(){
    setlocale(LC_ALL,"");

    //Criar rand(randomic)
    srand((unsigned) time(NULL)); //unsigned = força a ser um numero positivo.

    int aleatorio = rand() % 3;//Aleatorio entre 0 e 2

    printf("%d", aleatorio);
}
