#include <iostream>

using namespace std;

int main() {
    int valores[100];
    int valor;
    int n = 0;
    do {
        cin >> valor;
        if (valor != 0) {
            valores[n] = valor;
            n++;
        }
    } while (valor != 0);

    int alvo;

    cin >> alvo;

    for (int i = 0; i < n; i++) {
        if (valores[i] == alvo) {
            cout << "Elemento " << alvo << " encontrado na posicao " << i
                 << endl;
            return 0;
        }
    }

    cout << "Elemento " << alvo << " nao foi encontrado" << endl;

    return 0;
}