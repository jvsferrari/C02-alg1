#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double n1, n2, inferior, superior;

    cin >> n1 >> n2;

    inferior = n1;
    superior = n2;
    bool inferiorDefinido = false;

    cout << fixed << setprecision(1);

    for (double i = n1; i <= n2; i += 0.1) {
        if (sin(i) * cos(i) > 0) {
            if (inferior < i && inferiorDefinido == false) {
                inferior = i;
                inferiorDefinido = true;
            }
        } else if (inferiorDefinido) {
            superior = i - 0.1;
            break;
        }
    }

    cout << inferior << " a " << superior << endl;
}