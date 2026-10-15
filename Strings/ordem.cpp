#include <iostream>

using namespace std;

int main() {
    string palavras[3];
    cin >> palavras[0] >> palavras[1] >> palavras[2];

    for (int j = 2; j > 0; j--) {  // bubble sort: o ultimo valor vai com
                                   // certeza chegar a ultima posicao
        for (int i = 0; i < j; i++) {
            if (palavras[i] > palavras[i + 1]) {
                string temp = palavras[i];
                palavras[i] = palavras[i + 1];
                palavras[i + 1] = temp;
            }
        }
    }

    cout << palavras[0] << " " << palavras[1] << " " << palavras[2] << "\n";

    return 0;
}