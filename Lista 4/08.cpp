#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    for (int f = 50; f <= 150; f++){
        cout << "Fahrenheit: " << f << "°F    ";
        cout << "Celsius: " << fixed << setprecision(2) << (5.0/9.0) * (f - 32) << "°C\n";
    }
    
    return 0;
}
