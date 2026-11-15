#include <iomanip>
#include <iostream>

using namespace std;

float media(int notas[], int nAlunos) {
    float soma = 0;
    for (int i = 0; i < nAlunos; i++) {
        soma += notas[i];
    }
    return soma / nAlunos;
}

int main() {
    int n;
    int notas[100];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> notas[i];
    }

    float notaMedia = media(notas, n);

    cout << fixed << setprecision(2);

    cout << "Media da turma = " << notaMedia;

    return 0;
}