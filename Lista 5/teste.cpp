#include <iostream>
#include <cstdlib>
using namespace std;

// Obter números aleatórios 
int main(){
    int vetor[10];
    
    for (int i = 0 ; i < 10; i++){
        vetor[i] = 1 + rand() % 2;
        cout << vetor [i] << " ";
    }

    return 0;
}