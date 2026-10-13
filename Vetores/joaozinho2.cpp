#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x[100];
    int y[100];
    char op[100];
    for (int i = 0; i < n; i++) {
        int valor;
        cin >> valor;
        x[i] = valor;
    }
    for (int i = 0; i < n; i++) {
        int valor;
        cin >> valor;
        y[i] = valor;
    }
    for (int i = 0; i < n; i++) {
        char operacao;
        cin >> operacao;
        op[i] = operacao;
    }

    cout << fixed << setprecision(2);

    for (int i = 0; i < n; i++) {
        int resultado;
        double resultadoReal;
        switch (op[i]) {
            case '+':
                resultado = x[i] + y[i];
                break;
            case '-':
                resultado = x[i] - y[i];
                break;
            case '/':
                resultadoReal = (double)x[i] / y[i];
                cout << x[i] << " " << op[i] << " " << y[i] << " = "
                     << resultadoReal << endl;
                continue;
                break;
            case '*':
                resultado = x[i] * y[i];
                break;
        }
        cout << x[i] << " " << op[i] << " " << y[i] << " = " << resultado
             << endl;
    }

    return 0;
}