#include <iostream>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    if (y == x || y == 23) {
        cout << "На границе";
    }
    else if (y > x && y < 23) {
        cout << "Да";
    }
    else {
        cout << "Нет";
    }

    return 0;
}
