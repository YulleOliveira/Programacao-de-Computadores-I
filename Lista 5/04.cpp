#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Número de elementos dos vetores: "; cin >> n;

    float vetorA[n], vetorB[n];

    cout << "\nDigite os elementos do vetor A: " << endl;
    for (int i = 0; i < n; i++){
        cin >> vetorA[i];
    }
    cout << "\nDigite os elementos do vetor B: " << endl;
    for (int i = 0; i < n; i++){
        cin >> vetorB[i];
    }
    
    float produto = 0;
    for (int i = 0; i < n; i++){
        produto += vetorA[i] * vetorB[i];
    }
    cout << "\nProduto escalar = " << produto << endl;

    return 0;
}