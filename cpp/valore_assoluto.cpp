#include <iostream>
using namespace std;

int main() {

    // dichiarazione di due variabili di tipo intero
    int numero = 0;
    int valore_assoluto = 0;

    // stampa a video di una stringa
    cout << "Inserisci un numero intero: ";
    // lettura da tastiera di un numero intero
    cin >> numero;

    // se il numero e' minore di 0 allora il valore assoluto è l'opposto del numero stesso
    // altrimenti il valore assoluto è il numero stesso
    if(numero < 0) {
        valore_assoluto = (-numero);
        // oppure valore_assoluto = numero * (-1);
    } else {
        valore_assoluto = numero;
    }

    // stampa a video del risultato
    cout << "Il valore assoluto e': " << valore_assoluto << endl;
    return 0;
}