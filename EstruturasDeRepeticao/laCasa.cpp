#include <iostream>

using namespace std;

int main() {
    int N, votos;
    votos = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int voto;
        cin >> voto;
        votos += voto;
    }

    if (votos < 0) {
        cout << "A maioria nao gostou" << endl;
    } else if (votos > 0) {
        cout << "A maioria gostou" << endl;
    } else
        cout << "Deu empate" << endl;
    return 0;
}