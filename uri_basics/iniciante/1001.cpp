/*
Leia 2 valores inteiros e armazene-os nas variáveis A e B. 
Efetue a soma de A e B atribuindo o seu resultado na variável X. 
Imprima X conforme exemplo apresentado abaixo. 
Não apresente mensagem alguma além daquilo que está sendo especificado e 
não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".
*/

#include <iostream>

using namespace std;

int 
main(){
    
    int n1, n2;

    cin >> n1 >> n2;
    cout << "X = "<< n1 + n2 << "\n";

    return 0;
}