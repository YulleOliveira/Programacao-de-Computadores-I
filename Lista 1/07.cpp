/* 7. Dadas as medidas dos catetos de um triângulo retângulo, informe a medida da hipotenusa.
A hipotenusa é o nome dado para o maior lado de um triângulo retângulo. Ela se encontra sempre do lado oposto ao ângulo de 90º do
triângulo retângulo. Pelo teorema de Pitágoras, temos: A soma do quadrado dos catetos é igual ao quadrado da hipotenusa:
c2 = a2+b2
*/

include <iostream>
include <cmath> // Biblioteca para usar sqrt()
using namespace std;
int main() {
    long cateto1, cateto2;
    char hipotenusa;
  
    // Entrada de dados
    cout << "Digite o valor do primeiro cateto: ";
    cin >> cateto1;
  
    cout << "Digite o valor do segundo cateto: ";
    cin >> cateto2;
  
    // Cálculo da hipotenusa
    hipotenusa = sqrt(pow(cateto1, 2)) + pow(cateto2, 2);
    cout << "A medida da hipotenusa é: " << hipotenusa << endl;
    return 0;
}

/* ERROS:
Erro sintaxe: linhas 7, 8 (#inlude), 
Erro de lógica: linha 22 (cálculo incorreto da hipotenusa, a raiz está sendo aplicada somente no quadrado do ṕrimeiro cateto).
Erro de compilação: linhas 12 e 19 (tipos incompatíveis).
*/

// Código corrigido: 


#include <iostream>
#include <cmath> // Biblioteca para usar sqrt()
using namespace std;

int main() {
    long cateto1, cateto2;
    long hipotenusa;
  
    // Entrada de dados
    cout << "Digite o valor do primeiro cateto: ";
    cin >> cateto1;
  
    cout << "Digite o valor do segundo cateto: ";
    cin >> cateto2;
  
    // Cálculo da hipotenusa
    hipotenusa = sqrt((pow(cateto1, 2)) + (pow(cateto2, 2)));
    cout << "A medida da hipotenusa é: " << hipotenusa << endl;
    
    return 0;
}
