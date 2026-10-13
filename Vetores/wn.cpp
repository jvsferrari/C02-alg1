#include <iostream>

using namespace std;

int main() {
    int n;
    int mais = 0;
    int menos = 0;

    do {
        cin >> n;
    } while (n < 0 && n > 1000);

    int vis[1000];

    for (int i = 0; i < n; i++) {
        cin >> vis[n];
        if (vis[n] >= 10000000) {
            mais++;
        } else
            menos++;
    }

    cout << mais << " video(s) com mais de 10M views" << endl
         << menos << " video(s) com menos de 10M views";
}