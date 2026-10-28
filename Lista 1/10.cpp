#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x1, y1, x2, y2, d;
    cout << "X1 = "; cin >> x1;
    cout << "y1 = "; cin >> y1;
    cout << "X2 = "; cin >> x2;
    cout << "y2 = "; cin >> y2;

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "Distancia entre os pontos: " << d << endl;

    return 0;
}