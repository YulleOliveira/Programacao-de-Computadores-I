#include <iostream>
using namespace std;

int main(){
    double nota1, nota2, media;

    cout << "Nota 1: "; cin >> nota1;
    cout << "Nota 2: "; cin >> nota2;
    media = (nota1+nota2)/2;
    cout << "Média: " << media << endl;

    if (media >= 7){
        cout << "Situacao: aprovado" << endl;
    } else{
        cout << "Situacao: reprovado" << endl;
    }

    return 0;
}