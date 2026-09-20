#include <iostream>

using namespace std;

int main() {
    int opcao = 1;
    int pontosInter = 0;
    int pontosGremio = 0;
    int empates = 0;
    int grenais = 0;
    while (opcao == 1) {
        int inter, gremio;
        cin >> inter >> gremio;
        if (inter > gremio) {
            pontosInter++;
        } else if (gremio > inter) {
            pontosGremio++;
        } else {
            empates++;
        };
        grenais++;
        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> opcao;
        while (opcao != 1 && opcao != 2) {
            cin >> opcao;
        }
    }

    cout << grenais << " grenais\n"
         << "Inter:" << pontosInter << endl
         << "Gremio:" << pontosGremio << endl
         << "Empates:" << empates << endl;

    if (pontosGremio > pontosInter) {
        cout << "Gremio venceu mais\n";
    } else if (pontosInter > pontosGremio) {
        cout << "Inter venceu mais\n";
    } else
        cout << "Nao houve vencedor\n";
    return 0;
}
