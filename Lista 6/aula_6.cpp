#include <iostream>
using namespace std;

int main(){

    // Matriz
    int m[2][3] = {  
        {1, 2, 3},
        {4, 5, 6}
    };
    cout << m[1][0] << endl; // Acessa elementos
    m[1][0] = 10;  // Atribuição de valor ao elemento da matriz
    cout << m[1][0] << endl;

    return 0;
}