#include <iostream>
using namespace std;

int main(){
    float salario, prestacao;
    
    cout << "Valor do salário: R$"; cin >> salario;
    cout << "Valor da prestação: R$"; cin >> prestacao;
    
    if (prestacao > (salario*0.2)){
        cout << "Empréstimo não concedido";
    } else {
        cout << "Empréstimo concedido";
    }

    return 0;
}
