#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    struct Padawan {
        string nome;
        int pontos;
    };

    int n, max;
    double somaPontos = 0;

    cin >> n;

    Padawan padawans[1000];

    for (int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, padawans[i].nome);
        cin >> padawans[i].pontos;
        if (i == 0) {
            max = i;
        } else if (padawans[i].pontos > padawans[max].pontos) {
            max = i;
        }
        somaPontos += padawans[i].pontos;
    }

    cout << fixed << setprecision(2);

    cout << "Padawan com mais pontos: " << padawans[max].nome << endl
         << "Pontos: " << padawans[max].pontos << endl
         << "Media da turma: " << somaPontos / n << " pontos" << endl;

    return 0;
}