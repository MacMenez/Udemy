#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    int a = 5;
    char b = 'x';

    //escolha � utilizado muito em menus

    //ESTRUTURA SE
    if(a == 1){
        //INSTRU��O 1
    }else if(a == 2){
        //INSTRU��O 2
    }else if(a == 3){
        //INSTRU��O 3
    }else{
        //INSTRU��O 4
    }

    //ESTRUTURA CASO
    switch(a){
        case 1:
            //INSTRU��O 1
            break;
        case 1:
            //INSTRU��O 2
            break;
        case 1:
            //INSTRU��O 3
            break;
        default:
            //INSTRU��O 4
            break;
    }

        switch(b){
        case 'x':
            //INSTRU��O 1
            break;
        default:
            //INSTRU��O 4
            break;
    }
}
