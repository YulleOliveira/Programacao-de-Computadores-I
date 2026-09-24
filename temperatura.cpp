#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    double c,f,k;
    string texto, busca, conteudo, lin;

    ofstream arquivoSaida ("temperatura.txt");
    cout << "Temperatura em Celsius: "; cin >> c;
    k = c+273;
    string k2 = to_string(k);
    f = 1.8*c + 32;
    string f2 = to_string(f);
    texto = k2 + "K\n" + f2 + "F\n";
    arquivoSaida << texto;
    arquivoSaida.close();

    cout << "Busca: "; cin >> busca;
    ifstream arquivoEntrada (busca);
    arquivoEntrada >> conteudo >> lin;
    cout << "Conteúdo: \n" << conteudo << "\n" << lin << endl;
    arquivoEntrada.close();

    return 0;
}
