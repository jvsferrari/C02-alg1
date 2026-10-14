#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    struct Aluno {
        int matricula;
        double p1;
        double p2;
        double media;
    };

    Aluno aluno;

    cin >> aluno.matricula >> aluno.p1 >> aluno.p2;

    aluno.media = (2 * aluno.p1 + 3 * aluno.p2) / 5;

    cout << fixed << setprecision(2);

    cout << "Matricula do aluno: " << aluno.matricula << endl
         << "Nota da primeira prova: " << aluno.p1 << endl
         << "Nota da segunda prova: " << aluno.p2 << endl
         << "Media: " << aluno.media << endl;

    return 0;
}