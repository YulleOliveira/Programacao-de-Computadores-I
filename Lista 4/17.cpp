#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    double r, termo = 1;
    
    cout << "Razão da PG: "; cin >> r;
    cout << "Números de termos: "; cin >> n;
    
    for (int i = 0; i < n; i++){
        cout << termo << endl;
        termo *= r;
    }
    
    return 0;
}
