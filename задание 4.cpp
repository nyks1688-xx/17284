#include <iostream>
using namespace std;

int main() {
    int x;
    
    cout << "Введи число: ";
    cin >> x;

    if (x > 3) {
        cout << "Больше 3";
    } else if (x == 3) {
        cout << "Равно 3";
    } else {
        cout << "Меньше 3";
    }

    return 0;
}