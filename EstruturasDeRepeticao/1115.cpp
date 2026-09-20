#include <iostream>

using namespace std;

int main() {
    int x = 1;
    int y = 1;

    while (x != 0 || y != 0) {
        cin >> x >> y;
        if (x == 0 || y == 0) {
            break;
        }
        bool xpositivo = x > 0;
        bool ypositivo = y > 0;

        if (xpositivo && ypositivo) {
            cout << "primeiro" << endl;
        } else if (!xpositivo && ypositivo) {
            cout << "segundo" << endl;
        } else if (!xpositivo && !ypositivo) {
            cout << "terceiro" << endl;
        } else if (xpositivo && !ypositivo) {
            cout << "quarto" << endl;
        }
    }
};