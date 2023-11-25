#include <iostream>
using namespace std;

int main() {
    // dichiarazione di due variabili intere
    int numero = 0;
    int triplo = 0;

    // stampa a video di una stringa
    cout << "Inserisci un numero: ";
    // lettura da tastiera di un numero intero
    cin >> numero;

    // calcolo del triplo del numero inserito
    triplo = numero * 3;

    // stampa a video del risultato
    cout << "Il triplo del valore inserito e': " << triplo << endl;
    return 0;
}