/* 3. Um professor resolve fazer na sua disciplina três avaliações com pesos diferentes. Faça
um programa que receba três notas e seus respectivos pesos, calcule e mostre a média
ponderada dessas notas.

Entradas:
  Três números reais representando as notas nas avaliações
  Três números inteiros correspondendo aos pesos das avaliações
Saídas:
  Número real correspondente a média ponderada das notas


#include iostream>
using name space std;
int main {
    float nota1, nota2, nota3;
    
    cout<<"Digite 3 notas ";
    cin>>nota1>>nota2>>n3;
    cout<<"Digite 3 pesos inteiros";
    cin>>peso1>>peso2;
    cin>>peso3;
    
    float media = (nota1*peso1 + nota2*peso2 + nota3*peso3) + peso1+peso2 * peso3;
    cout<<media;
    return
}


ERROS:
Erro de sintaxe: linhas 13 (namespace), 14 (int main()) e 26 (return 0;).
Erro de lógica: linha 23 (cálculo da média está incorreto).
Erro de compilação: linhas 18, 20 e 21 (variáveis não declaradas).
Erro semântico: linha 18 (variável 'n3', além de não estar declarada, foi usada no lugar da variável 'nota3')

*/

// Código corrigido: 

#include <iostream>
using namespace std;

int main() {
    float nota1, nota2, nota3;
    int peso1, peso2, peso3;
    
    cout << "Digite 3 notas: ";
    cin >> nota1 >> nota2 >> nota3;
    
    cout<<"Digite 3 pesos inteiros: ";
    cin >> peso1 >> peso2 >> peso3;
    
    float media = (nota1*peso1 + nota2*peso2 + nota3*peso3)/(peso1+peso2+peso3);
    cout << "Média: " << media << endl;
    
    return 0;
}
