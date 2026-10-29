#include <iostream>
using namespace std;

int main(){
    double preco;
    int q;

    cout << "Preco unitario: "; cin >> preco;
    cout << "Quantidade: "; cin >> q;
    cout << "Valor final da compra: " << q*preco << endl;

    return 0;
}
