#include <iostream>
#include <ostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << 0 << " ";
    int n1 = 0;
    int n2 = 1;
    for (int i = 1; i < n; i++) {
        cout << n2 << " ";
        int nx = n1;
        n1 = n2;
        n2 += nx;
    }
    cout << endl;

    return 0;
}
