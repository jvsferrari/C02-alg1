#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string nomes[100];
    int idades[100];
    bool adultos = false;

    for (int i = 0; i < n; i++) {
        string nome;
        int idade;
        cin.ignore();
        getline(cin, nome);
        cin >> idade;
        nomes[i] = nome;
        idades[i] = idade;
    }

    for (int i = 0; i < n; i++) {
        if (idades[i] >= 18) {
            adultos = true;
            cout << nomes[i] << " " << idades[i] << endl;
        }
    }
    if (!adultos) {
        cout << "Nenhum jogador com 18 anos ou mais\n";
    }

    return 0;
}