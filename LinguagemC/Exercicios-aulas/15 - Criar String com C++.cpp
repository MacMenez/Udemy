#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std; //Faz com q nao digite std em todos os comandos.

int main(){
    setlocale(LC_ALL,"");

    //Para acessar a biblioteca da string digite std::

    std::string palavra;

    printf("Ol�!");

    cout << "Digite uma palavra: ";
    cin >> palavra;

    cout << "\n A palavra �: " << palavra;

    return 0;
}
