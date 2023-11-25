#include <iostream>
using namespace std;

int main() {

    // dichiarazione di una variabile intera
    int numero = 0;

    // stampa a video di una stringa
    cout << "Inserisci un numero intero: ";
    // lettura da tastiera di un numero intero
    cin >> numero;

    if(numero > 0) { // se il numero e' maggiore di 0 stampa P
        cout << "P" << endl;
    } else if(numero < 0) { // se il numero e' minore di 0 stampa N
        cout << "N" << endl;
    } else if(numero == 0) { // se il numero e' uguale a 0 stampa Z
        cout << "Z" << endl;
    }
    
    return 0;
}