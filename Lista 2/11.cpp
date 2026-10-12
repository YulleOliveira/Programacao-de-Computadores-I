#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int populacao;
    double silvBiologos, silvRegistros, idososBiologos, idososRegistros;
    
    // Entrada di tamanho da população
    cout << "Tamanho da população total da fauna: "; cin >> populacao;
    
    /* Arquivo 'dados.txt' recebe os dados informados pelos biólogos e 
    pelos registros oficiais, ainda na forma de ponto flutuante */
    ofstream arquivo("dados.txt");
    arquivo << populacao * 0.11 << endl;
    arquivo << populacao * 0.11 * 0.73 << endl;
    arquivo << (populacao * 0.11)/3 << endl;
    arquivo << (populacao * 0.11 * 0.73)/4 << endl;
    arquivo.close();
    
    // Abre o arquivo e guarda os valores em variáveis
    ifstream arquivoSaida("dados.txt");
    arquivoSaida >> silvBiologos >> silvRegistros >> idososBiologos >> idososRegistros; 
    arquivoSaida.close();
    
    // Saída dos valores em formato de número inteiro
    cout << int(silvBiologos) << "\n" << int(silvRegistros) << endl;
    cout << int(idososBiologos) << "\n" << int(idososRegistros) << endl;
    
    return 0;
}
