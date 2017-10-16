/*
Leia quatro valores inteiros A, B, C e D. 
A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D segundo a fórmula: 
DIFERENCA = (A * B - C * D).
*/

#include <iostream>

using namespace std;

int
main(){

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    int dif = (a * b) - (c * d);

    cout << "DIFERENCA = " << dif << '\n';

    return 0;
}