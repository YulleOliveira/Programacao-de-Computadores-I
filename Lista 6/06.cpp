#include <iostream>
using namespace std;

int main() {
    int m[3][3]; int diagonal[3];
    
    cout << "Insira os elementos na matriz: " << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> m[i][j];
            
            if (i == j){
                diagonal[i] = m[i][j];
            }
        }
    }
    
    cout << "\nMatriz: \n" << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nElementos da diagonal: ";
    for (int i = 0; i < 3; i++){
        cout << diagonal[i] << " ";
    }

    return 0;
}
