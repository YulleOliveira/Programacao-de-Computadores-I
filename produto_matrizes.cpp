#include <iostream>
using namespace std;

int main(){
    
    int linhasA, linhasB, colunasA, colunasB;
    
    // Escolha da quantidade de linhas e colunas da matriz A
    do{
        cout << "\nNúmero de linhas da matriz A: "; cin >> linhasA;
        cout << "Número de colunas da matriz A: "; cin >> colunasA;
        
        if (linhasA > 4 || colunasA > 4){
            cout << "ERRO \nEscolha até 4 linhas e/ou colunas.\n";
        } else if (linhasA <= 0 || colunasA <= 0){
            cout << "ERRO \nEscolha números positivos.\n";
        }
    } while ((linhasA > 4 || linhasA <= 0) || (colunasA > 4 || colunasA <= 0));
    
    
    // Escolha da quantidade de linhas e colunas da matriz B
    do {
        cout << "\nNúmero de linhas da matriz B: "; cin >> linhasB;
        cout << "Número de colunas da matriz B: "; cin >> colunasB;
        
        if (linhasB > 4 || colunasB > 4){
            cout << "ERRO \nEscolha até 4 linhas e/ou colunas.\n";
        } else if (linhasB <= 0 || colunasB <= 0){
            cout << "ERRO \nEscolha números positivos.\n";
        } else if (colunasA != linhasB){
            cout << "ERRO \nO número de linhas da matriz B deve ser igual ao número de colunas da matriz A.\n";
        }
        
    } while ((linhasA > 4 || linhasA <= 0) || (colunasA > 4 || colunasA <= 0) || (colunasA != linhasB));
    
    int a[linhasA][colunasA]; int b[linhasB][colunasB]; // Matrizes A e B
    
    
    // Construção da matriz A
    cout << "\nDigite os elementos da matriz A: \n" << endl;
    for (int i = 0; i < linhasA; i++){      
        for (int j = 0; j < colunasA; j++){
            cin >> a[i][j];
        }
    }
    
    
    // Construção da matriz B
    cout << "\nDigite os elementos da matriz B: \n" << endl;
    for (int i = 0; i < linhasB; i++){      
        for (int j = 0; j < colunasB; j++){
            cin >> b[i][j];
        }
    }
    
    cout << "\nMatriz A: \n";
    for (int i = 0; i < linhasA; i++){
        for (int j = 0; j < colunasA; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nMatriz B: \n";
    for (int i = 0; i < linhasB; i++){
        for (int j = 0; j < colunasB; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    
    
    // Construção da matriz C = A x B
    int c[linhasA][colunasB];
    for (int iA = 0; iA < linhasA; iA++){           // Linha A
        for (int jB = 0; jB < linhasB; jB++){       // Linha B
            int elemento = 0;                       // Inicialização do novo elemento c(ij) da matriz
            for (int ji = 0; ji < colunasA; ji++){  // Coluna A = linha B
                elemento += a[iA][ji] * b[ji][jB];
            }
            c[iA][jB] = elemento;
        }
    }

    cout << "\nMatriz C = A x B: \n" << endl;
    for (int k = 0; k < linhasA; k++){
        for (int m = 0; m < colunasB; m++){
            cout << c[k][m] << " ";
        }
        cout << endl;
    }

    return 0;
}
