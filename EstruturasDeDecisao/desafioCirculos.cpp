#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double x1, y1, r1, x2, y2, r2;
  cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

  double d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

  if (d > r1 + r2) {
    cout << 0 << endl;
  } else {

    double area = r1 * r1 * acos((d * d + r1 * r1 - r2 * r2) / (2 * d * r1)) +
                  r2 * r2 * acos((d * d + r2 * r2 - r1 * r1) / (2 * d * r2)) -
                  0.5 * sqrt((-d + r1 + r2) * (d + r1 - r2) * (d - r1 + r2) *
                             (d + r1 + r2));
    cout << fixed << setprecision(2);
    cout << area << endl;
  };
  return 0;
}