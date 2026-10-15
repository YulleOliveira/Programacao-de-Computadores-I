// Incorreto

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int cibele, camila, celeste, n1, n2, n3, maior, menor, intermediario;
    
    cin >> n1 >> n2 >> n3;
    
    maior = max(n1,n2);
    maior = max(maior,n3);
    menor = min(n1,n2);
    menor = min(menor,n3);
    
    if (n1 >= menor and n1 <= maior){
        intermediario = n1;
    }
    if (n2 >= menor and n2 <= maior){
        intermediario = n2;
    }
    if (n3 >= menor and n3 <= maior){
        intermediario = n3;
    }
    
    cout << "menor: " << menor << endl;
    cout << "maior: " << maior << endl;
    cout << "intermediario: " << intermediario << endl;
    
    //cout << "\n" << camila << endl;
    
    return 0;
}
