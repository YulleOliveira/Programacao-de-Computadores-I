#include <iostream>
using namespace std;

int main(){
    int li, ls;
    cout << "Limite inferior: "; cin >> li;
    cout << "Limite superior: "; cin >> ls;
    
    for (int i = li; i <= ls; i++){
        cout << i << " ";
    }
    
    return 0;
}
