#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int dia;
    float valor, ingresso, total = 0;
    string categoria;
    
    cout << "Valor do ingresso: R$"; cin >> valor;
    do {
        if (dia != -1){
            
            cout << "\nDia da compra: "; cin >> dia;
            cout << "Categoria: "; cin >> categoria;
            
            if (dia <= 13 and dia > 0 and categoria == "E"){
                ingresso = valor * 0.8;  total += ingresso;
                
            } else if (dia <= 13 and dia > 0 and categoria == "A"){
                ingresso = valor * 0.9;  total += ingresso;
                
            } else if (dia >= 14 and dia <= 31 and categoria == "E"){
                ingresso = valor * 0.9;  total += ingresso;
                
            } else if (dia >= 14 and dia <= 31 and categoria == "A"){
                ingresso = valor * 0.95;  total += ingresso;
                
            }
        }
        
    } while (dia != -1);
    
    cout << "\nTotal: R$" << fixed << setprecision(2) << total << endl;

    return 0;
}
