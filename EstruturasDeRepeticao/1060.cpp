#include <iostream>
#include <ostream>

using namespace std;

int main() {
    int counter = 0;
    for (int i = 0; i < 6; i++) {
        double valor;
        cin >> valor;
        if (valor > 0) {
            counter++;
        };
    };
    cout << counter << " valores positivos" << endl;
    return 0;
}