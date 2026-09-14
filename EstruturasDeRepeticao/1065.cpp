#include <iostream>

using namespace std;

int main() {
    int pares = 0;
    for (int i = 0; i < 5; i++) {
        int numero;
        cin >> numero;
        if (numero % 2 == 0) {
            pares++;
        }
    }
    cout << pares << " valores pares" << endl;
    return 0;
}