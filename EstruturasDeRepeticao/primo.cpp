#include <iostream>

using namespace std;

int main() {
    int n = 1;

    while (n > 0) {
        cin >> n;
        int divisores = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                divisores++;
            }
        }
        if (divisores == 2 || divisores == 1) {
            cout << "primo\n";
        } else if (divisores > 2) {
            cout << "nao e primo\n";
        }
    }

    return 0;
}
