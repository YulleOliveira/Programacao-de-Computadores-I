#include <iostream>
using namespace std;

int main () {
    int x = 5;
    int *p;

    p = &x;

    cout << "Valor de x: " << x << endl;
    cout << "Endereço de x: " << &x << endl;
    cout << "Valor de p (endereço): " << p << endl;
    cout << "Valor apontado por p: " << *p << endl;

    return 0;
}