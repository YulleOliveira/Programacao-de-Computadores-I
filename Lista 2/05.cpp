#include <iostream>
#include <fstream>
using namespace std;

int main () {
    float valor, custo, convite;

    // Cria o arquivo 'teatro.txt' para guardar o custo do espetáculo
    cout << "Custo do espetáculo: R$" ; cin >> valor;
    ofstream arquivoValor("teatro.txt");
    arquivoValor << valor;
    arquivoValor.close();

    // Retira do arquivo já existente o custo
    ifstream arquivoCusto("teatro.txt");
    arquivoCusto >> custo;
    arquivoCusto.close();

    // Preço do convite
    cout << "Preço do convite: R$"; cin >> convite;

    // Cálculo do número de convites
    int n = custo/convite + 1;
    cout << "Número de convites para cobrir o custo da realização: " << n;

    // Guarda o número de convites no arquivo 'convite.txt'
    ofstream arquivoConvite("convite.txt");
    arquivoConvite << n;
    arquivoConvite.close();

    return 0;
}
