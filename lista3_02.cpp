#include <iostream>
using namespace std;

int main(){
    
    double salario, emprestimo;
    
    cout << "Salário: "; cin >> salario;
    cout << "valor da prestação do empréstimo: "; cin >> emprestimo;
    
    if (emprestimo > salario*1.2) {
        cout << "Empréstimo não concedido.";
    } else {
        cout << "Empréstimo concedido.";
    }

    return 0;
}
