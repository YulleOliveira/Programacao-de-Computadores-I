#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    
    cout << "A = "; cin >> a; 
    cout << "B = "; cin >> b; 
    cout << "C = "; cin >> c; 
    
    int pares = 0; int impares = 0;
    
    if (a % 2 == 0){
        pares += 1;
    } else {
        impares += 1;
    } 
    
    if (b % 2 == 0){
        pares += 1;
    } else {
        impares += 1;
    } 
    
    if (c % 2 == 0){
        pares += 1;
    } else {
        impares += 1;
    } 
    
    cout << "Quantidade de pares: " << pares << endl;
    cout << "Quantidade de ímpares: " << impares << endl;
    
    return 0;
}
