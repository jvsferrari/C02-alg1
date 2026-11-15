#include <iostream>

using namespace std;

struct dados {
    string nome;
    int n1;
    int n2;
    int n3;
    int n4;
};

int strongest(dados atletas[], int nAtletas) {
    int somas[100];
    int melhor = 0;
    for (int i = 0; i < nAtletas; i++) {
        somas[i] =
            atletas[i].n1 + atletas[i].n2 + atletas[i].n3 + atletas[i].n4;
    }
    for (int i = 0; i < nAtletas; i++) {
        if (somas[i] > somas[melhor]) {
            melhor = i;
        }
    }
    return melhor;
}

int main() {
    int n;
    cin >> n;

    dados atletas[100];

    for (int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, atletas[i].nome);
        cin >> atletas[i].n1 >> atletas[i].n2 >> atletas[i].n3 >> atletas[i].n4;
    }

    int melhor = strongest(atletas, n);

    cout << "Vencedor: " << atletas[melhor].nome << endl;
}