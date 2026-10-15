#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    string jogadorA[50];
    string jogadorB[50];

    for (int i = 0; i < n; i++) {
        cin >> jogadorA[i] >> jogadorB[i];
        if (jogadorA[i] == "pedra") {
            if (jogadorB[i] == "pedra") {
                cout << "Empate\n";
            }
            if (jogadorB[i] == "papel") {
                cout << "Jogador B\n";
            }
            if (jogadorB[i] == "tesoura") {
                cout << "Jogador A\n";
            }
        }
        if (jogadorA[i] == "papel") {
            if (jogadorB[i] == "pedra") {
                cout << "Jogador A\n";
            }
            if (jogadorB[i] == "papel") {
                cout << "Empate\n";
            }
            if (jogadorB[i] == "tesoura") {
                cout << "Jogador B\n";
            }
        }
        if (jogadorA[i] == "tesoura") {
            if (jogadorB[i] == "pedra") {
                cout << "Jogador B\n";
            }
            if (jogadorB[i] == "papel") {
                cout << "Jogador A\n";
            }
            if (jogadorB[i] == "tesoura") {
                cout << "Empate\n";
            }
        }
    }

    return 0;
}