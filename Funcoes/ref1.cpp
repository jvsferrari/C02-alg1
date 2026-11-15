#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

void media(int x, int y, float &m) { m = sqrt(x * y); }

int main() {
    int x, y;
    cin >> x >> y;

    float mediaGeometrica;
    media(x, y, mediaGeometrica);

    cout << fixed << setprecision(2);
    cout << "Media: " << mediaGeometrica << endl;

    return 0;
}
