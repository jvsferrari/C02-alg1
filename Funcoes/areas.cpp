#include <iomanip>
#include <iostream>

using namespace std;

double calcularAreaCirculo(double raio) { return 3.14159 * raio * raio; }

double calcularAreaRetangulo(double base, double altura) {
    return base * altura;
}

double calcularAreaTriangulo(double base, double altura) {
    return base * altura / 2;
}

int main() {
    string figura;
    cout << fixed << setprecision(2);
    do {
        cin >> figura;
        if (figura != "fim") {
            cout << "area = ";
            double a, b;
            cin >> a;
            if (figura == "retangulo") {
                cin >> b;
                cout << calcularAreaRetangulo(a, b);
            }
            if (figura == "triangulo") {
                cin >> b;
                cout << calcularAreaTriangulo(a, b);
            }
            if (figura == "circulo") {
                cout << calcularAreaCirculo(a);
            }
            cout << endl;
        }
    } while (figura != "fim");
    return 0;
}