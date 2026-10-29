#include <iostream>
using namespace std;

int main() {
    double n1,n2;
    char operacao;

    cout << "Número 1: "; cin >> n1;
    cout << "Número 2: "; cin >> n2;
    cout << "Selecione a operação: \n[+] Soma  \n[-] Subtração  \n[*] Multiplicação  \n[/] Divisão  \nSelecione: "; 
    cin >> operacao;

    switch (operacao) {
    case '+':
        cout << "Soma: " << n1+n2 << endl;
        break;
    case '-':
        cout << "Subtração: " << n1-n2 << endl;
        break;
    case '*':
        cout << "Multiplicação: " << n1*n2 << endl;
        break;
    case '/':
        if (n2 == 0){
            cout << "Não é possível fazer divisão por zero." << endl;
        } else {
            cout << "Divisão: " << n1/n2 << endl;
        }
        break;
    default:
        cout << "Operação inválida." << endl;
    }

    return 0;
}
