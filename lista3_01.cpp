#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    
    cout << "1º número: "; cin >> n1;
    cout << "2º número: "; cin >> n2;
    
    if (n1 >= n2) {
        cout << "Maior número: " << n1;
    } else{
        cout << "Maior número: " << n2;
    }

    return 0;
}
