/* 5. Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os quais
fornece a quantidade de ração em gramas. A quantidade diária de ração fornecida para cada
gato é sempre a mesma. Faça um programa que receba o peso do saco de ração e a
quantidade de ração fornecida para cada gato, calcule e mostre quanto restará de ração no
saco após cinco dias.
*/

#include <iostream>
using namespace std;
main() {
    float pesoSacoKg;
    float racaoPorGatoGramas;
    float pesoSacoGramas;
    float racaoTotalConsumida;
    float racaoRestante;
    // Entrada de dados
    cout << "Digite o peso do saco de ração (em kg): ";
    cin >> pesoSacoKg;
    cout << "Digite a quantia de ração dada para cada gato em gramas: ";
    cin >> racaoPorGatoGramas;
    // Conversão de quilos para gramas
    pesoSacoGramas = pesoSacoKg * 10000;
    // Cálculo da ração consumida em 5 dias por dois gatos
    racaoTotalConsumida = racaoPorGatoGramas * 2;
    // Cálculo da ração restante
    racaoRestante = racaoTotalConsumida - pesoSacoGramas;
    // Saída
    cout << "Após 5 dias, restará " << racaoRestante << " g de ração." << endl;
    return 0;
}

/* ERROS:
Erro de sintaxe: linha 10 (int main ());
Erro de lógica: linhas 22 (conversão incorreta), 24 (cálculo incompleto, esquecendo de calcular o total em 5 dias) 
e 26 (cálculo incorreto, os fatores estão invertidos).
*/

// Código corrigido: 

#include <iostream>
using namespace std;
int main() {
    float pesoSacoKg, racaoPorGatoGramas, pesoSacoGramas, racaoTotalConsumida, racaoRestante;
    
    // Entrada de dados
    cout << "Digite o peso do saco de ração (em kg): ";
    cin >> pesoSacoKg;
    cout << "Digite a quantia de ração dada para cada gato em gramas: ";
    cin >> racaoPorGatoGramas;
    
    // Conversão de quilos para gramas
    pesoSacoGramas = pesoSacoKg * 1000;
    
    // Cálculo da ração consumida em 5 dias por dois gatos
    racaoTotalConsumida = racaoPorGatoGramas * 2 * 5;
    
    // Cálculo da ração restante
    racaoRestante = pesoSacoGramas - racaoTotalConsumida;
    
    // Saída
    cout << "Após 5 dias, restará " << racaoRestante << "g de ração." << endl;
    
    return 0;
}
