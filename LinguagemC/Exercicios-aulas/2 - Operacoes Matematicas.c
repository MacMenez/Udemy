#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");

    int a = 6;
    int b = 3;
    //SOMA
    //printf("A soma de %d e %d = %d \n",a, b, a + b);//Pega as variaveis sequenciais.

    //SUBTRA��O
    //printf("A subtra��o de %d e %d = %d \n",a, b, a - b);

    //DIVIS�O
    //printf("A divis�o de %d e %d = %d \n",a, b, a / b);

    //MULTIPLICA��O
    //printf("A mutiplica��o de %d e %d = %d \n",a, b, a * b);

    //RESTO DE DIVIS�O
    //printf("O resto da divis�o entre %d e %d = %d \n",a, b, a % b);

    float c = -3;
    //VALOR ABSOLUTO
    //printf("\n O valor absoluto de -3 = %d \n", abs(c));
    //Valor absoluto � sempre o n�mero positivo.

    system("pause");
}
