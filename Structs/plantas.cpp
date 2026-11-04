#include <iostream>

using namespace std;

int main() {
    struct Planta {
        string nome;
        int rega;
        int luz;
    };

    int n;
    cin >> n;

    Planta plantas[1000];

    for (int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, plantas[i].nome);
        cin >> plantas[i].luz;
        cin >> plantas[i].rega;
    }

    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << plantas[i].nome;
        cout << " - ";
        if (plantas[i].luz < 3) {
            cout << "Falta de luz!";
        } else if (plantas[i].luz > 6) {
            cout << "Excesso de luz!";
        } else {
            cout << "Luz ok!";
        }

        cout << " - ";

        if (plantas[i].rega > 2) {
            cout << "Excesso de rega!" << endl;
        } else {
            cout << "Rega ok!" << endl;
        }
    }

    return 0;
}