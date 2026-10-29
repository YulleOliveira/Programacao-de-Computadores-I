#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main() {
    float degrau, altura;

    ifstream arqEntrada("09_entrada.txt");
    if (!arqEntrada) {
        cout << "Erro ao tentar abrir o arquivo." << endl;
    } else {
        arqEntrada >> degrau >> altura;
    }

    float n = ceil(altura * 100.0/degrau);
    ofstream arqSaida("09_degraus.txt");
    arqSaida << n;
    arqSaida.close();

    return 0;
}