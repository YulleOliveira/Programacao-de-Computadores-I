#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int vetorA[10], vetorB[10], vetorR[20];

    ifstream arquivo("06_entrada.txt");
    for (int i = 0; i < 20; i++){
        if (i < 10) {
            arquivo >> vetorA[i];
        } else {
            arquivo >> vetorB[i - 10];
        }
    }
    arquivo.close();

    cout << "\nVetor A: " << endl;
    for (int a = 0; a < 10; a++){
        cout << vetorA[a] << " ";
    }
    cout << "\n\nVetor B: " << endl;
    for (int b = 0; b < 10; b++){
        cout << vetorB[b] << " ";
    }

    for (int i = 0; i < 20; i++){
        if (i % 2 == 0){
            vetorR[i] = vetorA[i/2];
        } else {
            vetorR[i] = vetorB[i/2];
        }
    }

    cout << "\n\nVetor R: " << endl;
    for (int i = 0; i < 20; i++){
        cout << vetorR[i] << " ";
    }

    return 0;
}