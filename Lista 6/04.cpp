#include <iostream>
using namespace std;

int main(){
    int m[3][2];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            cin >> m[i][j];
        }
    }

    cout << "\nMatriz: \n";
    for (int i= 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    for (int i = 0; i < 3; i++){
        int soma = 0;
        for (int j = 0; j < 2; j++){
            soma += m[i][j];
        }
        cout << "Soma da linha " << i+1 << ": " << soma << endl;
    }

    return 0;
}