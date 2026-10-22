// Está com erro na construção da matriz, provavelmente no loop

#include <iostream>
using namespace std;

int main(){

    int a[2][2]; int b[2][2]; // Matrizes A e B
    
    // Ajustar para trabalhar com matrizes que não são quadradas
    int n;
    do {
        cout << "Número de linhas da matriz: "; cin >> n;
        
        if (n > 4){
            cout << "ERRO \nSelecione até 4 linhas.\n";
        } else if (n <= 0){
            cout << "ERRO \nSelecione um número positivo.\n";
        }
        
    } while (n > 4 || n <= 0);
    
    cout << "Digite os elementos da matriz A: \n" << endl;
    
    for (int i = 0; i < n; i++){      // Construção da matriz A
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    
    cout << "\nDigite os elementos da matriz B: \n" << endl;
    
    for (int i = 0; i < n; i++){      // Construção da matriz B
        for (int j = 0; j < n; j++){
            cin >> b[i][j];
        }
    }
    
    cout << "\nMatriz A: \n";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nMatriz B: \n";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nMatriz C = A x B: \n" << endl;
    int c[2][2];
    for (int iA = 0; iA < n; iA++){          // Linha A
        for (int jB = 0; jB < n; jB++){      // Linha B
            int elemento = 0;                // Inicialização do novo elemento c(ij) da matriz
            for (int ji = 0; ji < n; ji++){  // Coluna A = linha B
                elemento += a[iA][ji] * b[ji][jB];
            }
            c[iA][jB] = elemento;
        }
    }

    for (int k = 0; k < n; k++){
        for (int m = 0; m < n; m++){
            cout << c[k][m] << " ";
        }
        cout << endl;
    }

    return 0;
}
