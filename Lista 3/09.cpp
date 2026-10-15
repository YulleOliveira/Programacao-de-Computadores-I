// Incompleto. Está imprimindo o dia errado, o erro está no contador 'c';

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    float n;

    // Leitura do arquivo já existente 'jazidas.txt' com os valores das extrações
    ifstream arquivo("jazidas.txt");
    
    int c = 1;   // contador
    int posicao;   // guarda a posição do maior valor atual dentro do loop
    float maior = -1; 
    while (arquivo >> n){   // extrai o conteúdo de cada linha do arquivo

        // Verificação do maior valor
        if (n > maior){
            maior = n;
            posicao = c;
        }
        c ++;
    }

    arquivo.close();

    // Identificação do dia da semana correspondente ao valor da posição encontrada do maior valor
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
    
    return 0;
}
