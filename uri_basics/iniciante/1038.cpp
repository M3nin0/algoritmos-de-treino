#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  int p, qtd;
  float itens[] = {0, 4.00, 4.50, 5.00, 2.00, 1.50};

  cin >> p >> qtd;

  cout << setprecision(2) << fixed;
  cout << "Total: R$ " << itens[p] * qtd << endl;
}
