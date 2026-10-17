#include <iostream>
using namespace std;

int main(){
    int n, produto = 1;

    cout << "Produto dos números de 1 até "; cin >> n;
    
    if (n >= 1){
        for (int i = 2; i <= n; i++){
            produto *= i;
        }
        cout << produto << endl;
    
    } else {
        cout << "ERRO \nEscolha um número maior ou igual a 1." << endl;
    }
    

    return 0;
}
