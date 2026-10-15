#include <iostream>
using namespace std;

int main(){
    int faces[10], cara = 0, coroa = 0;

    for (int i = 0; i < 10; i++){
        cin >> faces[i];
    }

    for (int i = 0; i < 10; i++){
        if (faces[i] == 1){
            coroa++;
        } else if (faces[i] == 2) {
            cara++;
        }
    }

    cout << "Cara: " << cara << "\nCoroa: " << coroa << endl;

    return 0;
}