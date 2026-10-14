#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int idade;
    string categoria;
    
    cout << "Idade: "; cin >> idade;
    
    if (idade >= 5 and idade <= 7){
        categoria = "Infantil A";
    } else if (idade >= 8 and idade <= 10){
        categoria = "Infantil B";
    } else if (idade >= 11 and idade <= 13){
        categoria = "Juvenil A";
    } else if (idade >= 14 and idade <= 17){
        categoria = "Juvenil B";
    } else {
        categoria = "Adulto";
    }
    
    ofstream arquivo("arquivoSaida.txt");
    arquivo << idade << "\n" << categoria << endl;
    arquivo.close();

    return 0;
}
