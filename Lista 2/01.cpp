#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string texto;
    ifstream arquivo("meus_arquivos.txt");
        arquivo >> texto;
        cout << texto;
    arquivo.close();

    return 0;
}
