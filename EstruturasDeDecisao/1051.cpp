#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double salario;
  cin >> salario;
  cout << fixed << setprecision(2);

  double imposto;
  if (salario < 2000.00) {
    imposto = 0;
    cout << "Isento" << endl;
    return 0;
  } else if (salario < 3000.00) {
    imposto = 0.08 * (salario - 2000.00);
  } else if (salario < 4500) {
    imposto = 80 + (salario - 3000.00) * 0.18;
  } else {
    imposto = 350 + (salario - 4500.00) * 0.28;
  }
  cout << "R$ " << imposto << endl;
  return 0;
}
