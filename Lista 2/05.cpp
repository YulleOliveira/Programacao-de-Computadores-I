#include <iostream>
#include <fstream>
using namespace std;

int main () {
    float custo, convite;
    
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
