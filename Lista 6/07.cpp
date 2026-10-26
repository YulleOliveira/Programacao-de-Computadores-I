#include <iostream>
using namespace std;

int main(){
    int m[2][3];
    cout << "Digite os elementos: " << endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cin >> m[i][j];
        }
    }
    
    int pares = 0;
    cout << "\nMatriz: \n";
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout << m[i][j] << " ";
            if (m[i][j] % 2 == 0) {pares++;}
        }
        cout << endl;
    }
    cout << "\nQuantidade de números pares: " << pares << endl;

    return 0;
}
