#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int minutos, horas, resto;

    ifstream arquivoEntrada("entrada06.txt");
    arquivoEntrada >> minutos;
    arquivoEntrada.close();

    horas = minutos/60;
    resto = minutos%60;

    ofstream arquivoSaida("saida06.txt");
    arquivoSaida << horas << "\n" << resto;
    arquivoSaida.close();

    return 0;
}
