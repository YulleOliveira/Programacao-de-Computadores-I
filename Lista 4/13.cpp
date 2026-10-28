#include <iostream>
using namespace std;

int main(){
    int v, cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0, nulo = 0, branco = 0;
    float total = 0;
    
    do {
        cin >> v;
        if (v != 0) {total++;}

        if (v == 1){
            cand1++;
        } else if (v == 2){
            cand2++;
        } else if (v == 3){
            cand3++;
        } else if (v == 4){
            cand4++;
        } else if (v == 5){
            nulo++;
        } else if (v == 6){
            branco++;
        }
        
    } while (v != 0);
    int validos = total - branco - nulo;
    
    cout << "1: " << cand1 << " " << cand1/total << endl;
    cout << "2: " << cand2 << " " << cand2/total << endl;
    cout << "3: " << cand3 << " " << cand3/total << endl;
    cout << "4: " << cand4 << " " << cand4/total << endl;
    cout << "5: " << nulo << " " << nulo/total << endl;
    cout << "6: " << branco << " " << branco/total << endl;
    cout << "7: " << validos << " " << validos/total << endl;

    return 0;
}
