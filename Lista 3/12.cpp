#include <iostream>
using namespace std;

int main(){
    int idade[3];
    
    // Entrada das idades
    for (int i = 0; i < 3; i++){
        cin >> idade[i];
    }
    
    // Toma o primeiro valor do vetor como referência para comparação com os demais valores
    int maiorValor = idade[0], maiorPosicao = 0;
    int menorValor = idade[0], menorPosicao = 0;
    for (int i = 1; i < 3; i++){
        
        if (idade[i] > maiorValor){ // Verifica o maior valor
            maiorPosicao = i;
            maiorValor = idade[i];
        }  
        
        if (idade[i] < menorValor){ // Verifica o menor valor
            menorPosicao = i;
            menorValor = idade[i];
        }
    }
   
    // Obtém o valor intermediário como sendo aquele que está numa posição diferente do maior e do menor
    int intermediario;
    for (int i = 1; i < 3; i++){
        if (i != maiorPosicao and i != menorPosicao){
           intermediario = idade[i]; 
        }
    }
    
    cout << "Idade de camila: " << intermediario << endl;

    return 0;
}
