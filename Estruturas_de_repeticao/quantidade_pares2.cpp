#include <iostream>
using namespace std;

int main(){
    int num;
    int quantidade = 0;

    while (num != 0){
        cout << "Digite um numero: "; cin >> num;

        if (((num%2)==0) and (num > 0)){
            quantidade++;
        }
    }

    cout << "Quantidade de pares positivos: " << quantidade << endl;

    return 0;
}