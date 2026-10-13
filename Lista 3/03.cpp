#include <iostream>
using namespace std;

int main(){
    int dividendo, divisor;
    
    cout << "Dividendo: "; cin >> dividendo;
    cout << "Divisor: "; cin >> divisor;
    
    if (divisor == 0){
        cout << "Erro";
    } else {
        cout << "Quociente: " << (dividendo/divisor) << endl;
        cout << "Resto: " << (dividendo%divisor) << endl;
    }

    return 0;
}
