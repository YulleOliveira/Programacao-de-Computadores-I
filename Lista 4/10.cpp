#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    cout << "Dado 1:   Dado 2:" << endl;
    for (int i = 1; i < 7; i++){
        for (int j = 1; j < 7; j++){
            if (i + j == 7){
                cout << i << "         " << j << endl;
            }
        }
    }
    
    return 0;
}
