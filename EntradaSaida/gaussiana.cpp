#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double x;
    double m;
    double s;
    double pi = 3.14159;
    double f;

    cin >> x >> m >> s;

    f = 1 / (sqrt(2 * pi * pow(s, 2))) * exp(-pow((x - m), 2) / (2 * pow(s, 2)));

    cout << fixed << setprecision(4);
    cout << f <<endl;
}