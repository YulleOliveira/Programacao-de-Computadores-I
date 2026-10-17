#include <iostream>
using namespace std;

int main(){
    int n, fatorial = 1;

    cout << "Fatorial de:  "; cin >> n;
    
    if (n >= 1){
        for (int i = 2; i <= n; i++){
            fatorial *= i;
        }
        cout << n << "! = " << fatorial << endl;
    
    } else {
        cout << "ERRO \nEscolha um número positivo." << endl;
    }
    

    return 0;
}
