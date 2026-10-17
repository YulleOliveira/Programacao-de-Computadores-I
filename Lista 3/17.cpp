#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
    float i, j, x, y;
    
    ifstream arquivo("ataque.txt");
    arquivo >> i >> j >> x >> y;
    arquivo.close();
    
    double d = sqrt(pow(x-i, 2) + pow(j-y, 2));
    
    if (d < 300){
        cout << "ACERTOU" << endl;
    } else {
        cout << d << endl;
    }

    return 0;
}
