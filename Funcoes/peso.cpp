#include <iomanip>
#include <iostream>

using namespace std;

float ideal(float h, char sexo) {
    if (sexo == 'F') {
        return h * 62.1 - 44.7;
    }
    if (sexo == 'M') {
        return h * 72.7 - 58;
    }
    return 0;
}

int main() {
    float h;
    char sexo;
    float pesoIdeal;

    cin >> h >> sexo;

    pesoIdeal = ideal(h, sexo);

    cout << fixed << setprecision(2);

    cout << "Peso ideal = " << pesoIdeal << " kg\n";

    return 0;
}