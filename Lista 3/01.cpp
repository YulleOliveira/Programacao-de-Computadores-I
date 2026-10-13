#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    
    cout << "Digite um valor: "; cin >> n1;
    cout << "Digite outro valor: "; cin >> n2;
    
    if (n1 > n2){
        cout << "Maior valor: " << n1;
    } else if (n1 < n2) {
        cout << "Maior valor: " << n2;
    } else {
        cout << "Os valores são iguais";
    }

    return 0;
}
