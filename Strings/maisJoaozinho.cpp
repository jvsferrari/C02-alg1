#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    string nomes[50];
    double n1[50];
    double n2[50];
    double n3[50];
    double n4[50];

    for (int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, nomes[i]);
        cin >> n1[i] >> n2[i] >> n3[i] >> n4[i];
    }

    cout << fixed << setprecision(2);

    for (int i = 0; i < n; i++) {
        cout << nomes[i] << ": "
             << (n1[i] + 2 * n2[i] + 3 * n3[i] + 4 * n4[i]) / 10 << endl;
    }

    return 0;
}