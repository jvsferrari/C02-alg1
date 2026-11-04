#include <iostream>

using namespace std;

int main() {
    struct Carro {
        string placa;
        int ano;
        string modelo;
    };

    int posNovo = 0;
    int posVelho = 0;
    bool fim = false;
    int n = 0;

    Carro carros[100];

    for (int i = 0; !fim; i++) {
        string placa;
        cin >> placa;
        if (placa == "fim") {
            fim = true;
            continue;
        } else {
            carros[i].placa = placa;
        }
        do {
            cin >> carros[i].ano;
        } while (carros[i].ano < 1900 || carros[i].ano > 2026);
        cin.ignore();
        getline(cin, carros[i].modelo);

        n++;

        if (carros[i].ano > carros[posNovo].ano) {
            posNovo = i;
        }

        if (carros[i].ano < carros[posVelho].ano) {
            posVelho = i;
        }
    }
    cout << "Num. carros: " << n << endl;
    cout << "Mais velho: " << carros[posVelho].ano << " "
         << carros[posVelho].modelo << endl;
    cout << "Mais novo: " << carros[posNovo].ano << " "
         << carros[posNovo].modelo << endl;

    return 0;
}