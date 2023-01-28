#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");

    int a = 6;
    int b = 3;
    //SOMA
    //printf("A soma de %d e %d = %d \n",a, b, a + b);//Pega as variaveis sequenciais.

    //SUBTRAÇÃO
    //printf("A subtração de %d e %d = %d \n",a, b, a - b);

    //DIVISÃO
    //printf("A divisão de %d e %d = %d \n",a, b, a / b);

    //MULTIPLICAÇÃO
    //printf("A mutiplicação de %d e %d = %d \n",a, b, a * b);

    //RESTO DE DIVISÃO
    //printf("O resto da divisão entre %d e %d = %d \n",a, b, a % b);

    float c = -3;
    //VALOR ABSOLUTO
    //printf("\n O valor absoluto de -3 = %d \n", abs(c));
    //Valor absoluto é sempre o número positivo.

    system("pause");
}
