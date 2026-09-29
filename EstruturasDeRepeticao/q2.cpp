#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double valor;
    double total = 0;
    int n = 0;

    do {
        cin >> valor;
        total += valor;
        if (valor != 0) n++;
    } while (valor != 0);

    cout << fixed << setprecision(1);

    cout << total / n << endl;

    return 0;
}