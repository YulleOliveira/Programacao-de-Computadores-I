#include <iostream>
using namespace std;

int main() {
	int valor, q100 = 0, q50 = 0, q20 = 0, q10 = 0, q5 = 0, q2 = 0, q1 = 0;
	cout << "Valor: R$"; cin >> valor;

	if (valor >= 100) {
		q100 = valor/100;
		valor = valor % 100;
	}

	if (valor >= 50) {
		q50 = valor/50;
		valor = valor % 50;
	}

	if (valor >= 20) {
	    q20 = valor/20;
		valor = valor % 20;
	}

	if (valor >= 10) {
		q10 = valor/10;
		valor = valor % 10;
	}

	if (valor >= 5) {
		q5 = valor/5;
		valor = valor % 5;
	}

	if (valor >= 2) {
		q2 = valor/2;
		valor = valor % 2;
	}

	cout << "100: " << q100 << endl;
	cout << "50: " << q50 << endl;
	cout << "20: " << q20 << endl;
	cout << "10: " << q10 << endl;
	cout << "5: " << q5 << endl;
	cout << "2: " << q2 << endl;
	cout << "1: " << valor << endl;

	return 0;
}
