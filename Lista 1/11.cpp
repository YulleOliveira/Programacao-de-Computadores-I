#include <iostream>
using namespace std;

int main() {
    float f, c;

    cout << "Temperatura em graus Fahrenheint: "; cin >> f;
    c = (f - 32) * (5.0/9);
    cout << "Temperatura em graus Celsius: " << c << endl;

    return 0;
}