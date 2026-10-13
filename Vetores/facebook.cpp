#include <iostream>

using namespace std;

int main() {
    int n;
    int min, max;
    cin >> n;

    // int contatos[n];

    for (int i = 0; i < n; i++) {
        int valor;
        cin >> valor;
        if (i == 0) {
            min = valor;
            max = valor;
        }
        if (valor > max) {
            max = valor;
        };
        if (valor < min) {
            min = valor;
        }
    }

    cout << "Menor numero de contatos: " << min << endl
         << "Maior numero de contatos: " << max << endl;
}