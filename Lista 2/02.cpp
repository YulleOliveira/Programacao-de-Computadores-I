#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    
    string nomearquivo, texto;
    cout << "Nome do arquivo: "; cin >> nomearquivo;
    ofstream arquivoSaida(nomearquivo);
    cout << "Escreva: "; cin >> texto;
    arquivoSaida << texto;
    arquivoSaida.close();
    cout << "\nDados escritos com sucesso!" << endl;

    string dados;
    ifstream arquivoEntrada(nomearquivo);
    arquivoEntrada >> dados;
    cout << dados;
    arquivoEntrada.close();

    return 0;
}
