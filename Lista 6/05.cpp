#include <iostream>
using namespace std;

int main(){
    int m[3][2];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            cin >> m[i][j];
        }
    }

    int maior = m[0][0];
    cout << "\nMatriz: \n";
    for (int i= 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            cout << m[i][j] << " ";

            if (m[i][j] > maior){
                maior = m[i][j];
            }
        }
        cout << endl;
    }
    cout << "\nMaior valor: " << maior << endl;

    return 0;
}