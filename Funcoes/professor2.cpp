#include <iomanip>
#include <iostream>

using namespace std;

int nAbaixo(int notas[], int nAlunos, float media) {
    int abaixo = 0;
    for (int i = 0; i < nAlunos; i++) {
        if (notas[i] < media) {
            abaixo++;
        }
    }
    return abaixo;
}
int nAcima(int notas[], int nAlunos, float media) {
    int acima = 0;
    for (int i = 0; i < nAlunos; i++) {
        if (notas[i] >= media) {
            acima++;
        }
    }
    return acima;
}

int main() {
    int n;
    cin >> n;
    int notas[100];
    float soma = 0;

    for (int i = 0; i < n; i++) {
        cin >> notas[i];
        soma += notas[i];
    }

    float media = soma / n;

    int notasAcima = nAcima(notas, n, media);
    int notasAbaixo = nAbaixo(notas, n, media);

    cout << fixed << setprecision(2);

    cout << "Media da turma = " << media << endl
         << "Alunos com nota abaixo da media: " << notasAbaixo << endl
         << "Alunos com nota acima da media: " << notasAcima << endl;
}