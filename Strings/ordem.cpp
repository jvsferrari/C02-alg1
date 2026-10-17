#include <iostream>

using namespace std;

int main() {
    string palavras[3];
    cin >> palavras[0] >> palavras[1] >> palavras[2];

    bool alterado = true;
    while (alterado) {
        alterado = false;

        for (int i = 0; i < 2; i++) {
            if (palavras[i] > palavras[i + 1]) {
                string temp = palavras[i];
                palavras[i] = palavras[i + 1];
                palavras[i + 1] = temp;
                alterado = true;
            }
        }
    }

    cout << palavras[0] << " " << palavras[1] << " " << palavras[2] << "\n";

    return 0;
}