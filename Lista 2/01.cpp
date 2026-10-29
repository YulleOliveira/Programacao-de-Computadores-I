#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string nomeArquivo, palavra;

    cout << "Nome do arquivo: "; cin >> nomeArquivo;
    ifstream arquivo(nomeArquivo);

    if (!arquivo){
        cout << "Nao foi possivel abrir o arquivo" << endl;
    } else {
        arquivo >> palavra;
        cout << palavra << endl;
    }
    arquivo.close();

    return 0;
}