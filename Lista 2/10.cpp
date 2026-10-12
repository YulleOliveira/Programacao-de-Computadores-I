#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int horas, minutos, segundos;

    // Entradas de quantidade de horas e minutos
    cout << "Horas: "; cin >> horas;
    cout << "Minutos: "; cin >> minutos;
  
    // Conversões e saída no arquivo 'saida.txt'  
    ofstream arquivo("saida.txt");
    int conversaoHoras = horas*60;
    int totalMin = conversaoHoras + minutos; 
    segundos = totalMin * 60;
    arquivo << conversaoHoras << "\n" << totalMin << "\n" << segundos;
    arquivo.close();
    
    return 0;
}
