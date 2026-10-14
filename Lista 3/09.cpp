// Incompleto. Está imprimindo o dia errado, o erro está no contador 'c';

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    float n;
    
    ifstream arquivo("jazidas.txt");
    
    int c = 1;
    int posicao;
    float maior = -1;
    while (arquivo >> n){
        cout << n << endl;
        
        if (n > maior){
            maior = n;
            posicao = c;
            cout << "posicao atual: " << posicao << endl;
        cout << "Valor de c: " << c << endl;
        c ++;
        }
    }
    
    string dia;
    switch (posicao){
        case 1:
            dia = "domingo";
            break;
        case 2:
            dia = "segunda-feira";
            break;
        case 3:
            dia = "terca-feira";
            break;
        case 4:
            dia = "quarta-feira";
            break;
        case 5:
            dia = "quinta-feira";
            break;
        case 6:
            dia = "sexta-feira";
            break;
        case 7:
            dia = "sabado";
            break;
    }
    
    cout << "Dia da semana com a maior extração: " << dia << endl;
    cout << "Quantidade de ouro extraída: " << maior << "kg" << endl;
    arquivo.close();
    
    return 0;
}
