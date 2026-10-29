#include <iostream>
#include <fstream>
using namespace std;

int main() {
    float c, k, f;

    cout << "Temperatura em Celsius: "; cin >> c;
    k = c + 273;
    f = 1.8*c + 32;

    ofstream arquivo("temperatura.txt");
    arquivo << k << " K\n" << f << " °F";
    arquivo.close();

    return 0;
}