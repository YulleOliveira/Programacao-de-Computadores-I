#include <iostream>
using namespace std;

int main(){
    int limite;
    int contador = 0;
    float valor;
    float soma = 0;

    cout << "Quantidade de valores: "; cin >> limite;

    while (contador < limite){
        cout << "Valor: "; cin >> valor;
        soma += valor;
        contador++;
    }

    cout << "Media: " << soma/float(limite) << endl;

    return 0;
}