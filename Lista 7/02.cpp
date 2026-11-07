#include <iostream>
using namespace std;

int main(){
    int a, b;

    do {
        cout << "A = "; cin >> a;
        cout << "B = "; cin >> b;

        if (a >= b){
            cout << "\nERRO \nO valor de A deve ser menor que o valor de B\n";
        }
    } while (a >= b);
    cout << endl;


    cout << "Divisíveis por 3 e por 5: ";
    int q35 = 0, q3 = 0, q5 = 0, soma = 0, maior;
    for (int i = a; i <= b; i++){
        if (i % 3 == 0 and i % 5 == 0){
            cout << i << " ";
            maior = i;
            q35++;
            q3++;
            q5++;
            
        } else if (i % 3 == 0){
            q3++;
        } else if (i % 5 == 0){
            q5++;     
        } else {
            soma += i;
        }
    }

    cout << "\nQuantidade divisivel por 3: " << q3 << endl;
    cout << "Quantidade divisivel por 5: " << q5 << endl;
    cout << "Quantidade divisivel por ambos: " << q35 << endl;
    cout << "Soma dos que nao sao divisiveis por 3 nem por 5: " << soma << endl;
    cout << "Maior divisivel por ambos: " << maior << endl;

    return 0;
}