#include <iostream>
using namespace std;

int main(){
    int a, b, soma = 0;
    
    cout << "Digite o valor inicial e o valor final: ";
    cin >> a >> b;
    
    if (a > b){
        cout << "\nERRO \nO valor inicial precisa ser menor que o final.\n";
    } else {
        for (int i = a; i <= b; i++){
            if (i % 2 == 1){
                soma += i;
            }
        }
    }
    
    cout << "Soma: " << soma << endl;

    return 0;
}
