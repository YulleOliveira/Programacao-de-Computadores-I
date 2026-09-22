#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string texto;
    
    // Abre (ou cria) o arquivo "dados.txt" para escrita
    ofstream arquivo("dados.txt");

    // Valida se o arquivo foi aberto com sucesso
    if (!arquivo.is_open()) {
        cerr << "Erro ao abrir o arquivo para escrita!\n";
        return 1;
    }

    // Escreve linhas no arquivo
    arquivo << "Primeira linha do arquivo.\n";
    arquivo << "Manipulando arquivos em C++ com sucesso!\n";
    cout << "Escreva uma palavra: "; cin >> texto;
    arquivo << texto;

    // Fecha o fluxo para garantir que os dados sejam salvos no disco
    arquivo.close();

    cout << "Arquivo gravado com sucesso!" << endl;
    return 0;
}
