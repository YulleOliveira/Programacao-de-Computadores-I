#include <iostream>
using namespace std;

int main(){
    int q, n, maior, menor;
    
    cout << "Quantidade de valores: "; cin >> q;
    cout << "Digite os valores: \n" << endl; 
    for (int i = 0; i < q; i++){
        cin >> n;
        
        if (i == 0){
            maior = n;
            menor = n;
        } else {
            if (n > maior){
                maior = n;
            } else if (n < menor){
                menor = n;
            }
        }
    }

    cout << "\nMaior: " << maior << "\nMenor: " << menor << endl;
    
    return 0;
}
