#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double raio;
    double area;

    cin >> raio;

    area = 3.14159 * raio * raio;

    cout << fixed << setprecision(3);
    cout << "AREA = " << area << endl;
}