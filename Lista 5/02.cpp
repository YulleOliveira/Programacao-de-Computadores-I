#include <iostream>
using namespace std;

int main(){
    float vetor[10], positivos = 0, somaNeg = 0;

    for (int i = 0; i < 10; i++){
        cin >> vetor[i];
    }

    for (int i = 0; i < 10; i++){
        if (vetor[i] >= 0){
            positivos++;
        } else {
            somaNeg += vetor[i];
        }
    }

    cout << "Quantidade de valores positivos: " << positivos << endl;
    cout << "Soma dos valores negativos: " << somaNeg << endl;

    for (int i = 9; i >= 0; i--){
        cout << vetor[i] << " ";
    }

    return 0;
}