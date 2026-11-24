#include <iostream>
using namespace std;

void soma10 (int *x) {
    *x = *x + 10;
}

int main() {
    int valor = 20;
    soma10(&valor);

    cout << valor << endl;

    return 0;
}