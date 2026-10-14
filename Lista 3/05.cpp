#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    
    if ((a == b + c + d) and (d == b + c) and (b == c)) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
