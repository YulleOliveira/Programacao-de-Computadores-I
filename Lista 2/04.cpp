#include <iostream>
#include <fstream>
using namespace std;

int main () {
    string arq1, arq2, arq3;
    
    // Nome do primeiro arquivo
    cout << "Primeiro arquivo: "; cin >> arq1;
    ofstream arquivo1(arq1);
    arquivo1 << "Super";
    arquivo1.close();
    
    // Nome do segundo arquivo
    cout << "Segundo arquivo: "; cin >> arq2;
    ofstream arquivo2(arq2);
    arquivo2 << "Algoritmo";
    arquivo2.close();
    
    // Nome do terceiro arquivo
    string conteudo1, conteudo2, termo1, termo2, termo3;
    cout << "Terceiro arquivo: "; cin >> arq3;
    ofstream arquivo3(arq3);
    
        // Leitura di conteúdo do primeiro arquivo
        ifstream leitura1(arq1);
        leitura1 >> conteudo1;
        leitura1.close();
        
        // Leitura do contepudo do segundo arquivo
        ifstream leitura2(arq2);
        leitura2 >> conteudo2;
        leitura2.close();
    
    // Arquivo 3 recebe o conteúdo dos dois primeiros arquivos
    arquivo3 << conteudo1 << " " << conteudo2;
    arquivo3.close();
    
    // Leitura do terceiro arquivo
    ifstream leitura3(arq3);
    leitura3 >> termo1 >> termo2;
    cout << "Conteúdo do arquivo " << arq3 << ": " << endl;
    cout << termo1 << " " << termo2; 
    leitura3.close();
    
    return 0;
}
