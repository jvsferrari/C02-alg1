#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int numero;
        cin >> numero;
        if (numero == 0) {
            cout << "NULL" << endl;
            continue;
        }
        if (numero % 2 == 0) {
            cout << "EVEN ";
        } else {
            cout << "ODD ";
        }
        if (numero > 0) {
            cout << "POSITIVE" << endl;
        } else {
            cout << "NEGATIVE" << endl;
        }
    }
    return 0;
}