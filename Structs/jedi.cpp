#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    struct Cavaleiro {
        string nome;
        int base;
    };

    Cavaleiro cavaleiros[1000];

    for (int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, cavaleiros[i].nome);
        cin >> cavaleiros[i].base;
    }

    string alvo;

    cin.ignore();
    getline(cin, alvo);

    for (int i = 0; i < n; i++) {
        if (cavaleiros[i].nome == alvo) {
            cout << "Este cavaleiro esta na base " << cavaleiros[i].base
                 << endl;
            return 0;
        }
    }
    cout << "Este cavaleiro nao esta cadastrado\n";
    return 0;
}