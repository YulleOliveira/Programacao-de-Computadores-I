#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    float valor;
    int p;
    
    // Entrada do valor do produto e da quantidade de prestações
    cout << "Valor à vista do produto: "; cin >> valor;
    cout << "Quantidade de prestações: "; cin >> p;
    
    // Guarda os valores no arquivo 'venda.txt', que é criado pelo 'ofstream', se necessário
    ofstream arquivoVenda("venda.txt");
    arquivoVenda << valor << "\n" << p;
    arquivoVenda.close();
    
    // Cálculo dos preços totais e das prestações antigos e atuais
    double precoAnterior = ceil(valor * 110)/100;
    double prestacaoAnt = ceil((precoAnterior/p) * 100)/100;
    double valorTotal = ceil(precoAnterior * 90)/100;
    double prestacaoAtual = ceil((valorTotal/p) * 100)/100;
    
    cout << "\nPreço total anterior: R$" << fixed << setprecision(2) << precoAnterior << endl;
    cout << "Prestação anterior: R$" << fixed << setprecision(2) << prestacaoAnt << endl;
    cout << "Prestação atual: R$" << fixed << setprecision(2) << prestacaoAtual << endl;
    cout << "Valor total atual: R$" << fixed << setprecision(2) << valorTotal << endl;
    
    // Guarda os valores calculados no arquivo 'cliente.txt'
    ofstream arquivoCliente("cliente.txt");
    arquivoCliente << precoAnterior << "\n" << prestacaoAnt << "\n";
    arquivoCliente << prestacaoAtual << "\n" << valorTotal << endl;
    arquivoCliente.close();
    
    return 0;
}
