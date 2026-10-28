/* 6. Faça um programa que leia 2 valores inteiros para duas variáveis a e b, escreva os
conteúdos das variáveis na tela, e em seguida troque os conteúdos das duas variáveis,
exibindo novamente os seus conteúdos na tela.
*/
  
#include <iostream>
using namespace std;
int main () {
    int a = 20, b = 88;
    a=b;
    b=a;
    cout<<" Valor de a " <<a<<endl;
    cout<<" Valor de b " <<b<<endl;
    return 0;
}

/* ERROS: 
Erro de lógica: A variável 'a' que valia 20 (linha 9) passa a valer 88 (linha 10: a = b), em seguida 'b' recebe o valor 
de 'a (a = 88). Assim, 'b' continua a valer 88, pois o valor antigo de 'a' (a = 20, linha 9), foi perdidoe e as 
variáveis não trocam seus valores.

*/

// Código corrigido:

#include <iostream>
using namespace std;

int main () {
    int a = 20, b = 88, c;
    c = a;
    a = b;
    b = c;
    cout << " Valor de a: " << a << endl;
    cout << " Valor de b: " << b << endl;
    
    return 0;
}
