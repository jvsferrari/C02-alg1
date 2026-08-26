#include <iostream>

using namespace std;

int main() {
  int a;
  int b;
  int c;

  int n1;
  int n2;
  int n3;

  cin >> a >> b >> c;

  if (a < b) {
    if (a < c) {
      n1 = a;
      if (b < c) {
        n2 = b;
        n3 = c;
      } else {
        n2 = c;
        n3 = b;
      }
    } else {
      n1 = c;
      n2 = a;
      n3 = b;
    }
  } else {
    if (a < c) {
      n1 = b;
      n2 = a;
      n3 = c;
    } else {
      if (b < c) {
        n1 = b;
        n2 = c;
        n3 = a;
      } else {
        n1 = c;
        n2 = b;
        n3 = a;
      }
    }
  }

  cout << n1 << endl << n2 << endl << n3 << endl;
  cout << endl << a << endl << b << endl << c << endl;

  return 0;
}