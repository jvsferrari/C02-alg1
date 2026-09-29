#include <iostream>

using namespace std;

int main() {
    int n;

    do {
        cin >> n;
    } while (n > 100 || n < 1);

    int faixa1 = 0;
    int faixa2 = 0;
    int faixa3 = 0;

    for (int i = 0; i < n; i++) {
        int idade;
        cin >> idade;
        if (idade < 3 || idade > 13) {
            i--;
            continue;
        }
        if (idade >= 3 && idade <= 5) {
            faixa1++;
        } else if (idade <= 9) {
            faixa2++;
        } else if (idade < 13) {
            faixa3++;
        }
    }

    cout << "3 a 5 anos: " << faixa1 << endl;
    cout << "6 a 9 anos: " << faixa2 << endl;
    cout << "10 a 13 anos: " << faixa3 << endl;

    return 0;
}