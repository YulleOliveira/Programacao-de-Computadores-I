#include <iostream>
using namespace std;

int main(){
    float preco;
    cout << "Preço do produto: R$"; cin >> preco;
    
    int condicao;
    
    cout << "\nCondição de pagamento:" << endl;
    cout << "[1] À vista em dinheiro ou cheque" << endl;
    cout << "[2] À vista no cartão de crédito" << endl;
    cout << "[3] Parcelado de 2x" << endl;
    cout << "[4] Parcelado de 3x" << endl;
    cout << "Selecione: "; cin >> condicao;
    
    switch (condicao){
        case 1:
            cout << "\nValor a pagar: R$" << preco * 0.9 << endl;
            break;
        case 2:
            cout << "\nValor a pagar: R$" << preco * 0.95 << endl;
            break;
        case 3:
            cout << "\nValor a pagar: R$" << preco << endl;
            break;
        case 4: 
            cout << "\nValor a pagar: R$" << preco * 1.1 << endl;
            break;
        default:
            cout << "\nERRO. Opção inválida." << endl;
    }

    return 0;
}
