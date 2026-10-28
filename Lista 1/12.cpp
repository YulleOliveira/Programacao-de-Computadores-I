#include <iostream>
using namespace std;

int main() {
    int dinheiro, canhoes, polvora, espadas;

    cout << "Dinheiro disponivel: "; cin >> dinheiro;
    
    canhoes = dinheiro/10000;
    dinheiro = dinheiro % 10000;
    polvora = dinheiro/2000;
    dinheiro = dinheiro % 2000;
    espadas = dinheiro/1500;

    cout << "Quantidade de canhoes: " << canhoes << endl;
    cout << "Quantidade de polvora: " << polvora << endl;
    cout << "Quantidade de espadas: " << espadas << endl;

    return 0;
}