#include <iostream>
using namespace std;

int main(){
    int soma = 0;
    for (int i = 2; i <= 98; i += 2){
        soma += i;
    }
    cout << "Soma = " << soma << endl;

    return 0;
}