#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, contador, divisor, quociente;

    cout << "Digite um número: "; cin >> n;

    contador = 1; divisor = 1; quociente = n; 
    /* Contador e divisor já iniciam com o valor 1 já considerando o número 1 como divisor, 
    reduzindo uma volta no loop*/
    
    do{
        divisor++;
        if (quociente % divisor == 0){   // Verifica se n é divisível pelo atual divisor do loop
            quociente = quociente/divisor;
            contador++;   // Conta a quantidade de divisores
        }
    } while (divisor <= sqrt(n));

    if (contador >= 2 and n != 2){  // Se um número for primo e diferen
        cout << "composto" << endl;
    } else {
        cout << "primo" << endl;
    }

    return 0;
}
