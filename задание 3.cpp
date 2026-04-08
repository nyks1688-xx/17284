#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, h, x, y;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "h = ";
    cin >> h;

    x = a;

    while (x <= b) {
        if (fabs(x * x * x + 8) == 0) {
            cout << "x = " << x << " -> нет решения" << endl;
        } else {
            y = 3 / fabs(x * x * x + 8);
            cout << "x = " << x << " y = " << y << endl;
        }
        x = x + h;
    }

    return 0;
}