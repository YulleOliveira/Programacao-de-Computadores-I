#include <iostream>
using namespace std;

int main(){
    double temp;

    cout << "Temperatura (°C): ";
    cin >> temp;

    if (temp < 15){
        cout << "Frio" << endl;
    } else if ((temp >= 15) and (temp <= 25)){
        cout << "Agradavel" << endl;
    } else{
        cout << "Quente" << endl;
    }

    return 0;
}
