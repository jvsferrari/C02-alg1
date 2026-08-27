#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int codigo;
    int quantidade;
    double precos[5] = {4, 4.5, 5, 2, 1.5};
    double total;

    cin >> codigo >> quantidade;
    total = precos[codigo - 1] * quantidade;
    cout << fixed << setprecision(2);
    cout << "Total: R$ " << total << endl;
}