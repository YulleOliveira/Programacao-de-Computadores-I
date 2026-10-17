#include <iostream>
using namespace std;

int main(){
    int n, soma = 0;

    for (int i = 0; i < 10; i++){
        cout << i+1 << "º valor: "; cin >> n;
        soma += n;
    }
    cout << "Soma = " << soma << endl;

    return 0;
}
