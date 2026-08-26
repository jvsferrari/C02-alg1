#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int L, C, R1, R2, D1, D2, xC1, xC2, yC1, yC2, dsqrd;
  cin >> L >> C >> R1 >> R2;
  D1 = 2 * R1;
  D2 = 2 * R2;

  xC1 = R1;
  yC1 = R1;

  xC2 = L - R2;
  yC2 = C - R2;

  dsqrd = pow((xC2 - xC1), 2) + pow((yC2 - yC1), 2);

  if (D1 > L || D1 > C || D2 > L || D2 > C || dsqrd < pow((R1 + R2), 2)) {
    cout << "N" << endl;
  } else {
    cout << "S" << endl;
  };
}