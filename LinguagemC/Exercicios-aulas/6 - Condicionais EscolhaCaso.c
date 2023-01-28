#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    int a = 5;
    char b = 'x';

    //escolha é utilizado muito em menus

    //ESTRUTURA SE
    if(a == 1){
        //INSTRUÇÃO 1
    }else if(a == 2){
        //INSTRUÇÃO 2
    }else if(a == 3){
        //INSTRUÇÃO 3
    }else{
        //INSTRUÇÃO 4
    }

    //ESTRUTURA CASO
    switch(a){
        case 1:
            //INSTRUÇÃO 1
            break;
        case 1:
            //INSTRUÇÃO 2
            break;
        case 1:
            //INSTRUÇÃO 3
            break;
        default:
            //INSTRUÇÃO 4
            break;
    }

        switch(b){
        case 'x':
            //INSTRUÇÃO 1
            break;
        default:
            //INSTRUÇÃO 4
            break;
    }
}
