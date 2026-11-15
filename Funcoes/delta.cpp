#include <iostream>

using namespace std;

float calc_delta(float a, float b, float c) {
    float delta = b * b - 4 * a * c;
    return delta;
}

int main() {
    float a, b, c;
    cin >> a >> b >> c;
    float delta = calc_delta(a, b, c);
    cout << "delta = " << delta;
}