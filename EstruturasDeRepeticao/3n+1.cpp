#include <iostream>

using namespace std;

int main() {
    int v1, v2;
    int maiorCiclo = 0;
    cin >> v1 >> v2;

    int i, j;

    if (v1 < v2) {
        i = v1;
        j = v2;
    } else {
        i = v2;
        j = v1;
    }

    for (int a = i; a <= j; a++) {
        int x = a;
        int ciclo = 1;
        while (x != 1) {
            ciclo++;
            if (x % 2 == 0) {
                x = x / 2;
            } else {
                x = 3 * x + 1;
            }
        };
        if (ciclo > maiorCiclo) {
            maiorCiclo = ciclo;
        }
    }
    cout << v1 << " " << v2 << " " << maiorCiclo << endl;
    return 0;
}