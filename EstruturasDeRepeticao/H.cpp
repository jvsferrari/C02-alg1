#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int n;
    double h = 0;
    cin >> n;

    for (double i = 1; i <= n; i++) {
        h = h + 1 / i;
    }

    cout << fixed << setprecision(4);
    cout << h << endl;

    return 0;
}