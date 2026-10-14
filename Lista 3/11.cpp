#include <iostream>
using namespace std;

int main(){
    int h0, min0, hF, minF;
    
    cout << "Horário de início" << endl; 
    cout << "Hora: "; cin >> h0;
    cout << "Minuto: "; cin >> min0;
    
    cout << "\nHorário de término" << endl; 
    cout << "Hora: "; cin >> hF;
    cout << "Minuto: "; cin >> minF;
    
    int total0 = h0*60 + min0;
    int totalF = hF*60 + minF;
    
    cout << "\nDuração do jogo: " << (totalF - total0)/60 << " horas e " << (totalF - total0)%60 << " minutos" << endl;
    
    return 0;
}
