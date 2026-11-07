#include <iostream>
using namespace std;

int main() {
    int n = -1, positivos = 0, negativos = 0, somaPos = 0, somaNeg = 0;
    int qPares = 0, maior, menor, c = 0;
    float somaPares = 0;

    cout << "Digite os valores: " << endl;
    while (n != 0){
        cin >> n;

        if (n != 0){
            c++;   // Contador

            // Positivo ou negativo
            if (n > 0) {
                positivos++;
                somaPos += n;
            } else {
                negativos++;
                somaNeg += n;
            }

            // Paridade
            if (n % 2 == 0){
                somaPares += n;
                qPares++;
            }

            // Maior e menor valor
            if (c == 1){
                maior = n; menor = n; 
            } else if (n > maior){
                maior = n;
            } else if (n < menor) {
                menor = n;
            }
        }
    }

    if (c == 0){
        cout << "\nNenhum número foi informado." << endl;
    } else {
        cout << "\nQuantidade de positivos: " << positivos << endl;
        cout << "Quantidade de negativos: " << negativos << endl;
        cout << "Soma dos positivos: " << somaPos << endl;
        cout << "Soma dos negativos: " << somaNeg << endl;

        if (qPares == 0){
            cout << "Não é possível calcular a média dos pares" << endl;
        } else {
            cout << "Média dos pares: " << somaPares/qPares << endl;
        }

        cout << "Maior número: " << maior << endl;
        cout << "Menor número: " << menor << endl;
    }

    return 0;
}