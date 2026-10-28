#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n, positivos = 0, negativos = 0;
    float soma = 0, q = 0;
    
    do {
        cin >> n;
        if (n != 0){
            q++;
            soma += n;
            
            if (n > 0){
                positivos++;
            } else {
                negativos++;
            }
        }
        
    } while (n != 0);
    
    cout << "\nMédia: " << fixed << setprecision(2) << soma/q << endl;
    cout << "Quantidade de positivos: " << positivos << endl;
    cout << "Quantidade de negativos: " << negativos << endl;
    cout << "Percentual de positivos: " << positivos/q << endl;
    cout << "Percentual de negativos: " << negativos/q << endl;
    
    return 0;
}
