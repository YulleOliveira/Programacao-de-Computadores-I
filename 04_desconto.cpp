#include <iostream>
using namespace std;

int main(){
    double valor;

    cout << "Valor da compra: ";
    cin >> valor;

    if (valor >= 200){
        cout << "Valor do desconto: 10% \nValor final: " << valor*0.9 << endl;
    } else{
        cout << "Valor do desconto: 0% \nValor final: " << valor << endl;
    }

    return 0;
}