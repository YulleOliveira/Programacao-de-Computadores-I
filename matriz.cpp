#include <iostream>
using namespace std;

int main(){

    // Matriz A
    int a[2][2] = {
        {1, 2},
        {4, 5},
    };

    // Matriz B
    int b[2][2]{
        {3, 6},
        {7, 4},
    };

    cout << "Matriz C = A x B: \n" << endl;
    int c[2][2];
    for (int iA = 0; iA < 2; iA++){
        for (int jB = 0; jB < 2; jB++){
            int elemento = 0;
            for (int ji = 0; ji < 2; ji++){
                elemento += a[iA][ji] * b[ji][jB];
            }
            c[iA][jB] = elemento;
        }
    }

    for (int k = 0; k < 2; k++){
        for (int m = 0; m < 2; m++){
            cout << c[k][m] << " ";
        }
        cout << endl;
    }

    return 0;
}
