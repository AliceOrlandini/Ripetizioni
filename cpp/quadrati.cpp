#include <iostream>
using namespace std;

int main() {
    
    // dichiarazione di una variabile intera
    int base = 0;

    // stampa a video di una stringa
    cout << "Inserisci la base del quadrato: ";
    // lettura da tastiera di un numero intero
    cin >> base;

    cout << "Stampo un quadrato di base " << base << ":" << endl;

    // stampa a video di un quadrato di base inserita dall'utente
    // tramite due cicli for annidati
    for(int i = 0; i < base; i++) {
        for(int j = 0; j < base; j++) {
            cout << "* "; // stampa a video di un asterisco e di uno spazio
        }
        cout << endl; // stampa a video di un a capo
    }
    
    return 0;
}