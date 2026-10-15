#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){
    float picanha, alcatra, linguica, vegetariano, sal, farinha, carvao;
    string nomeArquivo;
    
    // Entrada de dados com o conteúdo do arquivo 'churrasco.txt'
    cout << "Nome do arquivo: "; cin >> nomeArquivo;
    ifstream arquivo("churrasco.txt");
    arquivo >> picanha >> alcatra >> linguica >> vegetariano >> sal >> farinha >> carvao;
    arquivo.close();

    // Valor total
    float total = picanha*28.9 + alcatra*19.9 + linguica*7.95 + vegetariano*2.99 + sal*1.5 + farinha*1.85 + carvao*8.7;
    
    // Valor do desconto
    float desconto;
    if (total <= 200){
        desconto = 0.05;
    } else {
        desconto = 0.1;
    }
    
    cout << "Valor total: R$" << total << endl;
    cout << "Valor do desconto: R$" << fixed << setprecision(2) << total*desconto << endl;
    cout << "Valor final: R$" << fixed << setprecision(2) << total * (1 - desconto) << endl;
    
    return 0;
}
