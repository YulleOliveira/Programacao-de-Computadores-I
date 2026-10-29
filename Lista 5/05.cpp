#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    float vetor[7]; 
    int acimaMedia = 0;

    cout << "Informe as temperaturas: " << endl;
    float soma = 0;
    for (int i = 0; i < 7; i++){
        cin >> vetor[i];
        soma += vetor[i];
    }

    float media = soma/7, maior = vetor[0];
    for (int i = 0; i < 7; i++){
        if (vetor[i] > media){
            acimaMedia++;
        }

        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }

    cout << "Média: " << fixed << setprecision(2) << media << endl;
    cout << "Quantidade de dias com temperatura acima da média: " << acimaMedia << endl;
    cout << "Maior temperatura: " << maior << endl;

    ofstream arquivo("dados.txt");
    arquivo << media << "\n" << acimaMedia << "\n" << maior;
    arquivo.close();

    return 0;
}