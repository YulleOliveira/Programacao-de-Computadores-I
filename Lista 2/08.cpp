#include <iostream>
#include <fstream>
using namespace std;

int main() {
    float valor, total1, total2, prestacao1, prestacao2; 
    int prestacoes;
    cout.precision(2);
    cout.setf(ios::fixed);

    ifstream arqEntrada("08_venda.txt");
    if (!arqEntrada) {
        cout << "Erro ao tentar abrir o arquivo" << endl;
    } else {
        arqEntrada >> valor >> prestacoes;
    }
    arqEntrada.close();

    total1 = valor * 1.1;
    prestacao1 = total1/prestacoes;
    total2 = total1 * 0.9;
    prestacao2 = total2/prestacoes;

    ofstream arqSaida("08_cliente.txt");
    arqSaida << total1 << "\n" << prestacao1 << "\n" << prestacao2 << "\n" << total2;
    arqSaida.close();

    return 0;
}