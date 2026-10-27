#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a, b, q;
    cin >> a >> b;
    
    if (a < b){
        q = 0;
        
    } else {
        int n = b;
        q = 1;
        while (n < a and a - n >= b){
            q++;
            n += b;
        }
    }
    
    cout << q << endl;
    
    return 0;
}
