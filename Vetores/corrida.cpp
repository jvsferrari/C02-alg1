#include <iostream>

using namespace std;

int main() {
    double tempos[100];
    double valor;
    int n = 0;
    do {
        cin >> valor;
        tempos[n] = valor;
        if (valor != -1) {
            n++;
        };
    } while (valor != -1);

    int ordem[100];
    int numeroMenor;
    double menor;

    for (int posicaoNumero = 0; posicaoNumero < n; posicaoNumero++) {
        for (int menorExistente = 0; menorExistente < n; menorExistente++) {
            if (tempos[menorExistente] >= 0) {
                menor = tempos[menorExistente];
                numeroMenor = menorExistente;
                break;
            }
        }

        for (int i = 0; i < n; i++) {
            if (tempos[i] >= 0 && tempos[i] < menor) {
                menor = tempos[i];
                numeroMenor = i;
            }
        }
        ordem[posicaoNumero] = numeroMenor;
        tempos[numeroMenor] = -1;
    }
    cout << "Classificacao: ";

    for (int i = 0; i < n; i++) {
        cout << ordem[i] << " ";
    }
    cout << endl;
    return 0;
}
