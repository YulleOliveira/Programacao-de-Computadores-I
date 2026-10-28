#include <iostream>
using namespace std;

int main() {
    float pes, polegadas, jardas, milhas;

    cout << "Medida em pes: "; cin >> pes;
    polegadas = pes * 12;
    jardas = pes/3;
    milhas = jardas/1760;

    cout << "Medida em polegadas: " << polegadas << endl;
    cout << "Medida em jardas: " << jardas << endl;
    cout << "Medida em milhas: " << milhas << endl;

    return 0;
}