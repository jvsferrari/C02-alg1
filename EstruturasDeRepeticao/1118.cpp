#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double nota1, nota2, media;
    int opcao = 1;

    cout << fixed << setprecision(2);

    while (opcao == 1) {
        cin >> nota1;

        while (nota1 > 10 || nota1 < 0) {
            if (nota1 > 10 || nota1 < 0) {
                cout << "nota invalida\n";
            };
            cin >> nota1;
        }

        cin >> nota2;

        while (nota2 > 10 || nota2 < 0) {
            if (nota2 > 10 || nota2 < 0) {
                cout << "nota invalida\n";
            };
            cin >> nota2;
        }

        media = (nota1 + nota2) / 2.0;

        cout << "media = " << media << endl;
        cout << "novo calculo (1-sim 2-nao)\n";

        cin >> opcao;

        while (opcao != 1 && opcao != 2) {
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> opcao;
        }

        if (opcao == 2) {
            return 0;
        }
    }
}