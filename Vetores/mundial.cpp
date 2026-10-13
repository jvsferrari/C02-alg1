#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    double total = 0;
    int acima = 0;
    int abaixo = 0;
    double notas[100];

    for (int i = 0; i < n; i++) {
        cin >> notas[i];
        total += notas[i];
    }

    double media = total / n;

    for (int i = 0; i < n; i++) {
        if (notas[i] < media) {
            abaixo++;
        } else {
            acima++;
        }
    }

    cout << fixed << setprecision(2);

    cout << "Media da turma: " << media << endl
         << "Alunos com nota acima da media: " << acima << endl
         << "Alunos com nota abaixo da media: " << abaixo << endl;

    return 0;
}