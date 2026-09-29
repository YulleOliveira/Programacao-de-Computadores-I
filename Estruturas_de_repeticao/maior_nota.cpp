#include <iostream>
using namespace std;

int main(){
    double nota;
    double maior = -1;
    int quantidade = -1;

    do{
        cout << "Nota: "; cin >> nota;
        quantidade ++;
        
        if (nota > maior){
            maior = nota;
        }

    } while (nota>=0);

    cout << "Quantidade de candidatos: " << quantidade << endl;
    cout << "Maior nota: " << maior << endl;

    return 0;
}