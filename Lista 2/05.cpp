#include <iostream>
#include <fstream>
using namespace std;

int main () {
    float valor, custo, convite;
    
    valor = 5000;
    ofstream arquivoValor("teatro.txt");
    arquivoValor << valor;
    arquivoValor.close();
    
    ifstream arquivoCusto("teatro.txt");
    arquivoCusto >> custo;
    cout << "Custo: " << custo << endl;
    arquivoCusto.close();
    
    cout << "Preço do convite: R$"; cin >> convite;
    
    int n = custo/convite + 1;
    cout << "Número de convites para cobrir o custo da realização: " << n;
    
    ofstream arquivoConvite("convite.txt");
    arquivoConvite << n;
    arquivoConvite.close();

    return 0;
}
