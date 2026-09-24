#include <iostream>
using namespace std;

int main(){
    int n1, n2;

    cout << "1o numero: "; cin >> n1;
    cout << "2o numero: "; cin >> n2;

    if (n1 > n2){
        cout << "O 1o numero é maior: " << n1 << endl;
    } else if (n2 > n1){
        cout << "O 2o numero é maior: " << n2 << endl;
    } else {
        cout << "Os numeros sao iguais." << endl;
    }

    return 0;
}