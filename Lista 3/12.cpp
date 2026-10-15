// Está incorreto

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){
    int cibele, camila, celeste, n;
    
    for (int i = 0; i < 3; i++){
        cin >> n;
        
        if (i == 0){
            cibele = n;
            camila = n;
            celeste = n;
        }
        
        if (n > cibele){
            cibele = n;
        } else if (n < celeste){
            celeste = n;
        } else {
            camila = n;
        }
    }
    
    cout << "\n" << camila << endl;
    
    return 0;
}
