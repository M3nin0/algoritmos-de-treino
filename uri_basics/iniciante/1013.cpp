/*
Faça um programa que leia três valores e 
apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula: 

MaiorAB = (a + b + abs(a - b))/ 2

Entrada
O arquivo de entrada contém três valores inteiros.

Saída
Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".
*/

#include <iostream>
#include <iomanip>

using namespace std;

int
main(void){

    short int a, b, c;
    
    cin >> a >> b >> c;

    short int maior = (a + b + abs(a - b)) / 2;

    if (maior < c)
        maior = c;

    cout << maior << " eh o maior" << "\n";

    return 0;
}