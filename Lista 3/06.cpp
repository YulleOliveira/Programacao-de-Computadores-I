#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "A = "; cin >> a;
    cout << "B = "; cin >> b;
    cout << "C = "; cin >> c;
    
    if (a + b > c and a + c > b and a + b > c) {
        
        if (a == b and b == c){
            cout << "Equilátero" << endl;
        } else if (a != b and b != c and a != c){
            cout << "Escaleno" << endl;
        } else {
            cout << "Isósceles" << endl;
        }
        
    } else {
        cout << "Inexistente" << endl;
    }

    return 0;
}
