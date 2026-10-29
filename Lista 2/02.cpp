#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string nomeArquivo, palavra;
    
    cout << "Nome do arquivo: "; cin >> nomeArquivo;
    cout << "Digite uma palavra: "; cin >> palavra;
    ofstream arquivo(nomeArquivo);
    arquivo << palavra;
    arquivo.close();

    return 0;
}