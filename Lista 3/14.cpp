#include <iostream>
using namespace std;

int main(){
    int opc;
    float x, y;
    
    cout << "Escolha uma opção: " << endl;
    cout << "[1] Soma de 2 números \n[2] Diferença de 2 números (maior pelo menor)" << endl;
    cout << "[3] Produto de 2 números \n[4] Divisão de 2 números" << endl;
    cout << "Selecione: "; cin >> opc;
    
    cout << "x  = "; cin >> x;
    cout << "y  = "; cin >> y;
    switch (opc){
        case 1:
            cout << x << " + " << y << " = " << x+y << endl;
            break;
            
        case 2:
            if (x < y){
                cout << "ERRO. \nO primeiro número deve ser maior." << endl;
            } else {
                cout << x << " - " << y << " = " << x-y << endl;
            }
            break;
        
        case 3:
            cout << x << " * " << y << " = " << x*y << endl;
            break;
        
        case 4:
            if (y == 0){
                cout << "ERRO. O denominador deve ser diferente de zero." << endl;
            } else{
                cout << x << "/" << y << " = " << x/y << endl;
            }
            break;
            
        default:
            cout << "ERRO. Escolha uma opção do menu." << endl; 
    }
    

    return 0;
}
