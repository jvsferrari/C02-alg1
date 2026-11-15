#include <iostream>

using namespace std;

int main() {
    struct Storm {
        int id;
        double im;
        double fa;
        double ga;
    };

    Storm storms[100];

    int id;
    int count = 0;

    do {
        cin >> id;
        if (id != 0) {
            storms[count].id = id;
            cin >> storms[count].im >> storms[count].fa;
            storms[count].ga = (storms[count].im + storms[count].fa) / 2;
            count++;
        }
    } while (id != 0);

    int melhor = 0;
    for (int i = 0; i <= count; i++) {
        if (storms[i].ga > storms[melhor].ga) {
            melhor = i;
        }
    }

    cout << "Stormtrooper escolhido: " << storms[melhor].id << endl
         << "GA = " << storms[melhor].ga << endl;
    return 0;
}