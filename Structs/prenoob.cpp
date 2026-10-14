#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    struct Aluno {
        int matricula;
        double p1;
        double p2;
    };

    Aluno aluno;

    cin >> aluno.matricula >> aluno.p1 >> aluno.p2;

    cout << fixed << setprecision(2);

    cout << "Matricula do aluno: " << aluno.matricula << endl
         << "Nota da primeira prova: " << aluno.p1 << endl
         << "Nota da segunda prova: " << aluno.p2 << endl;

    return 0;
}