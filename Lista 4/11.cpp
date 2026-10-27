#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a, b, soma = 0, produto = 1;
    
    do{
        cout << "\nDigite o valor inicial e o valor final: "; cin >> a >> b;
        if (a > b){
            cout << "\nERRO \nO valor inicial deve ser menor que o valor final.\n";
        }
    } while (a > b);
    
    for (int i = a; i <= b; i++){
        if (i % 2 == 0){
            soma += i;
        } else {
            produto *= i;
        }
    }
    cout << "\nSoma: " << soma << "\nMultiplicação: " << produto << endl;
    
    return 0;
}
