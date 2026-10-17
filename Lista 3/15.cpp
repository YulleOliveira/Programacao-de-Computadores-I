#include <iostream>
using namespace std;

int main(){
    int x, y;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    
    if (x >= -500 and x <= 500 and y >= -500 and y <= 500){
        if (x >= 0 and x <= 432 and y >= 0 and y <= 468){
            cout << "dentro" << endl;
        } else {
            cout << "fora" << endl;
        }
        
    } else {
        cout << "ERRO \nValor inválido. Insira valores tais que: -500 <= x,y <= 500." << endl;
    }

    return 0;
}
