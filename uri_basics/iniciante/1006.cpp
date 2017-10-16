/*
Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno. 
A seguir, calcule a média do aluno, sabendo que a nota A tem peso 2, 
a nota B tem peso 3 e a nota C tem peso 5. Considere que cada nota pode ir de 0 até 10.0, 
sempre com uma casa decimal.
*/

// Média ponderada
#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    
    float n1, n2, n3;

    cin >> n1 >> n2 >> n3;
    
    float media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;

    printf("MEDIA = %.1lf\n", media);

    return 0;
}