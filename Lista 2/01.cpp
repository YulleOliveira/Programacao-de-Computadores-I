#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    string nomeArquivo, palavra;
    cout << "Buscar arquivo: "; cin >> nomeArquivo;
    cout << "Digite uma palavra: "; cin >> palavra;
    ofstream arquivo(nomeArquivo);
    arquivo << palavra;
    arquivo.close();

    string conteudo;
    ifstream arquivoBusca(nomeArquivo);
    arquivoBusca >> conteudo;
    cout << "Conteúdo: " << conteudo;
    arquivoBusca.close();

    return 0;
}
