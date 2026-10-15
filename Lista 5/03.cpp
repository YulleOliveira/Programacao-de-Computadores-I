#include <iostream>
using namespace std;

int main(){
    int n, i;

    cout << "Quantidade de atletas: "; cin >> n;
    float pesos[n], soma = 0;
    
    for (i = 0; i < n; i++){
        cin >> pesos[i];
        soma += pesos[i];
    }
    double media = soma/n;

    for (i = 0; i < n; i++){
        if (pesos[i] > media){
            cout << i << endl;
        }
    }

    return 0;
}