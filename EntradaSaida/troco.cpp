#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double dinheiro;
    double preco;

    cin >> dinheiro >> preco;
    double troco = dinheiro - preco;

    cout << fixed << setprecision(2);

    if (dinheiro < preco) {
        cout << "Dinheiro insuficiente!";
        return 1;
    };

    cout << "TROCO = " << troco << endl;

    return 0;
}