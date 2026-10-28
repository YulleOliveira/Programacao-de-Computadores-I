/* 4. Faça um programa que possa entrar com o valor de um produto e imprima o novo valor
após ter recebido um desconto de 12%.

  
#include <iostream>
using namespace std;
int main () {
    float preco, novo preco;
    cout<<"Digite o preço do produto ";
    ci>>preco;
    novo preco = preco * 0.12 - preco;
    cout<<"Seu novo preco: "<<novopreco;
    return 0;
}

ERROS:
Erro de sintaxe: linhas 8, 11 (variável com espaco 'novo preco') e 10 (cin).
Erro de lógica: linha 11 (cálculo incorreto).
Erro de compilacao: linha 12 (variável 'novopreco' não declarada).

*/

// Código corrigido:

#include <iostream>
using namespace std;

int main () {
    float preco, novopreco;
    cout << "Digite o preço do produto: ";
    cin >> preco;
    novopreco = preco - preco * 0.12;
    cout << "Seu novo preco: " << novopreco;
    return 0;
}
