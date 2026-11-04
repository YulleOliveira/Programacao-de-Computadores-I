#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "Digite um numero: "; cin >> n;
    
    int resultado = n;
    int sub = 0;
    int i = 1;
    do {
        resultado = resultado - i;
        sub++;
        i += 2;
        
    } while (resultado >= 0);
    int raiz = sub - 1;
    int resto = n - pow(raiz,2);
    cout << "Parte inteira da raiz quadrada: " << raiz << endl;
    cout << "Resto final: " << resto << endl;
    cout << "Quantidade de subtrações: " << sub << endl;

    return 0;
}
