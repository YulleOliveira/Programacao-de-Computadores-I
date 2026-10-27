#include <iostream>
using namespace std;

int main(){
    int n = 0, cont = 0, maior, menor;
    
    cout << "Digite os valores (-1 para sair): " << endl;
    do {
        cont++;
        cin >> n;
        
        if (n <= 0 and n != -1){
            do {
                cout << "\nERRO \nDigite somente valores positivos.\n" << endl;
                cin >> n;
            } while (n <= 0 and n != -1);
        }
        
        if (cont == 1){
            maior = menor = n;
        }
        
        if (n > maior){
            maior = n;
        } else if (n < menor and n != -1){
            menor = n;
        }
        
    } while (n != -1);
    
    cout << "\nMaior: " << maior << "\nMenor: " << menor << endl;

    return 0;
}
