#include <iostream>
#include <fstream>
using namespace std;

int main () {
    float c,f,k;
    
    ofstream arquivo("temperatura.txt");
    cout << "Temperatura em Celsius: "; cin >> c;
    k = c + 273;
    f = 1.8*c + 32;
    arquivo << k << "\n" << f;
    arquivo.close();
    
    float tempK, tempF;
    ifstream arquivoSaida("temperatura.txt");
    arquivoSaida >> tempK >> tempF;
    cout << "Kelvin: " << tempK << " K" << endl; 
    cout << "Fahrenheit: " << tempF << " F" << endl;
    arquivoSaida.close();
    
    return 0;
}
