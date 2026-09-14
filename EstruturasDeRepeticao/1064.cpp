#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int positivos = 0;
    float total = 0;
    for (int i = 0; i < 6; i++) {
        double numero;
        cin >> numero;

        if (numero > 0) {
            total += numero;
            positivos++;
        };
    }
    cout << fixed << setprecision(1);
    cout << positivos << " valores positivos" << endl
         << total / positivos << endl;
    return 0;
}