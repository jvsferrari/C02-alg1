#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double s = 0;
    double x;
    double n;

    do {
        cin >> x;
    } while (x < -1 || x > 1);

    do {
        cin >> n;
    } while (n < 1 || n > 10);

    for (int i = 1; i <= n; i++) {
        s = s + (pow(x, 2 * i - 1) / i);
    };

    cout << fixed << setprecision(3);

    cout << s << endl;
}