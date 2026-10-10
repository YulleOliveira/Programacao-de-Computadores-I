#include <iostream>
#include <fstream>
using namespace std;

int main(){
    float salario;
    
    ifstream arquivo("salario.txt");
    arquivo >> salario;
    arquivo.close();
    
    cout << "Novo salário: R$" << salario*0.75;
    
    return 0;
}
