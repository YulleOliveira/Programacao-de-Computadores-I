#include <iostream>
#include <fstream>
using namespace std;

int main(){
    double valor;
    
    cout << "Valor: "; cin >> valor;
    int grau = valor;
    int minuto = (valor - grau)*60;
    int segundo = ((valor - grau)*60 - minuto)*60;
    
    cout << "Grau: " << grau << endl;
    cout << "Minuto: " << minuto << endl;
    cout << "Segundo: " << segundo << endl;
    
    ofstream arquivo("coordenadas.txt");
    arquivo << grau << "\n" << minuto << "\n" << segundo;
    arquivo.close();
    
    return 0;
}
