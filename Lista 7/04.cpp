#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b;
    do{
        cout << "Insira os valores: " << endl;
        cout << "A = "; cin >> a;
        cout << "B = "; cin >> b;

        if (a <= 0 or b <= 0){
            cout << "\nERRO \nInsira somente valores positivos. \n" << endl;
        } 
        if (a > b){
            cout << "\nERRO \nO valor de A deve ser menor ou igual a B. \n" << endl;
        }
        
    } while (a <= 0 or b <= 0 or a > b);


    // Encontra o primo verificando se o número não é composto
    int primos[b-a+1], q = 0, raiz, divisores;
    for (int n = a; n <= b; n++){
        divisores = 0;
        raiz = sqrt(n);
        for (int d = 2; d <= raiz; d++){
            if (n % d == 0){
                divisores++;
                break;
            }
        }
        
        if (divisores == 0){
            primos[q] = n;
            q++;
        }
    }

    cout << "Primos no intervalo: ";
    for (int i = 0; i < q; i++){
        cout << primos[i] << " ";
    }

    return 0;
}
