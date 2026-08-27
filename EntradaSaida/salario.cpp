#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int number;
    int hours;
    double rate;

    cin >> number >> hours >> rate;

    double salary;

    salary = hours * rate;

    cout << fixed << setprecision(2);

    cout << "NUMBER = " << number << endl << "SALARY = U$ " << salary << endl;
}