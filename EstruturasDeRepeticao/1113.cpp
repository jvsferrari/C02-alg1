#include <iostream>

using namespace std;

int main() {
    int x = 0;
    int y = 1;
    while (x != y) {
        cin >> x >> y;
        if (x == y) {
            return 0;
        }
        if (x > y) {
            cout << "Decrescente" << endl;
        } else {
            cout << "Crescente" << endl;
        }
    }
    return 0;
}
