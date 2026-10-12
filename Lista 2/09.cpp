#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
    float alturaDegrau, metros;
    
    ifstream arquivoEntrada("entrada.txt");
    arquivoEntrada >> alturaDegrau >> metros;
    arquivoEntrada.close();
    
    ofstream arquivoDegraus("degraus.txt");
    int d = ceil((metros*100)/alturaDegrau);
    arquivoDegraus << d;
    cout << "Quantidade de degraus: " << d << endl;
    arquivoDegraus.close();
    
    return 0;
}
