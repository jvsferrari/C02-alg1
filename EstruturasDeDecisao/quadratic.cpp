#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double a, b, c, x1, x2, delta;

    cin >> a >> b >> c;
    cout << fixed << setprecision(5);

    delta = b * b - 4 * a * c;

    if (delta < 0 || a == 0) {
        cout << "Impossivel calcular";
        return 0;
    }

    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    cout << "R1 = " << x1 << endl << "R2 = " << x2 << endl;

    return 0;
}