#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x, y, opcao;
    
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    
    cout << "\nOpções: \n[1] x^y \n[2] Raízes quadradas de x e y \n[3] Raízes cúbicas de x e y \nSelecione: ";
    cin >> opcao;
    
    switch (opcao){
        
        case 1:
            cout << "\n" << x << "^" << y << " = " << pow(x,y) << endl;
            break;
            
        case 2:
            cout << "\n" << "Raiz de " << x << ": " << sqrt(x) << endl;
            cout << "Raiz de " << y << ": " << sqrt(y) << endl;
            break;
        
        case 3:
            cout << "\n" << "Raiz cúbica de " << x << ": " << cbrt(x) << endl;
            cout << "Raiz cúbica de " << y << ": " << cbrt(y) << endl;
            break;
        
        default:
            cout << "\nERRO. Opção inválida." << endl; 
    }

    return 0;
}
