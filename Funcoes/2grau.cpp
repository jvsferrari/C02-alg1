#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int calc_raizes(float a, float b, float c, float &x1, float &x2) {
    float delta = b * b - 4 * a * c;
    if (delta < 0 || a == 0) {
        return 1;
    } else {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        return 0;
    }
}

int main() {
    float a, b, c, x1, x2;

    cout << fixed << setprecision(5);

    cin >> a >> b >> c;
    if (!calc_raizes(a, b, c, x1, x2)) {
        if (x1 == x2) {
            cout << "x = " << x1 << endl;
        } else {
            cout << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
        }
    } else {
        cout << "Impossivel calcular" << endl;
    }

    return 0;
}