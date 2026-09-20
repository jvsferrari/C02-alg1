#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int validas = 0;
    double somaValidas = 0;
    while (validas < 2) {
        double nota;
        cin >> nota;
        if (nota < 0 || nota > 10) {
            cout << "nota invalida\n";
            continue;
        } else {
            validas++;
            somaValidas += nota;
        }
    }
    cout << fixed << setprecision(2);
    double media = somaValidas / 2;
    cout << "media = " << media << endl;
    return 0;
}