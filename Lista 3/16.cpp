#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if ((a == 0 or a == 1) and (b == 0 or b == 1) and (c == 0 or c == 1)) {
        
        if (a != b and a!= c){
            cout << "A" << endl;
        } else if (b != a and b != c){
            cout << "B" << endl;
        } else if (c != a and c != b){
            cout << "C" << endl;
        } else{
            cout << "*" << endl;
        }
        
    } else {
        cout << "ERRO \nEscolha apenas 0 ou 1." << endl;
    }

    return 0;
}
