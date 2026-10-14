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

    int id = 1;
    int count = 1;

    for (int i = 0; id != 0; i++) {
        cin >> id;
        if (id == 0) {
            break;
        }
        storms[i].id = id;
        cin >> storms[i].im >> storms[i].fa;
        storms[i].ga = (storms[i].im + storms[i].fa) / 2;
        count++;
    }

    int melhor = 0;
    for (int i = 0; i < count; i++) {
        if (storms[i].ga > storms[melhor].ga) {
            melhor = i;
        }
    }

    cout << "Stormtrooper escolhido: " << storms[melhor].id << endl
         << "GA = " << storms[melhor].ga << endl;
    return 0;
}