#include <iostream>
#include <cmath>

using namespace std;

// Struttura per rappresentare un monomio
struct Monomio {
	int coefficiente;
	int esponente;
};

// Funzione per leggere un polinomio
void leggiPolinomio(Monomio* p, int& n) {
	cout << "Inserisci il numero di monomi del polinomio: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Inserisci il coefficiente e l'esponente del monomio " << i + 1 << ": ";
		cin >> p[i].coefficiente >> p[i].esponente;
	}
}

// Funzione per stampare un polinomio
void stampaPolinomio(Monomio* p, int n) {
	for (int i = 0; i < n; i++) {
		cout << p[i].coefficiente << "x^" << p[i].esponente;
		if (i < n - 1) {
			cout << " + ";
		}
	}
	cout << endl;
}

int main() {
	Monomio polinomio[100];
	int numMonomi;

	// Leggiamo il polinomio
	leggiPolinomio(polinomio, numMonomi);

	// Stampiamo il polinomio inserito
	cout << "Hai inserito il seguente polinomio: ";
	stampaPolinomio(polinomio, numMonomi);

	return 0;
}