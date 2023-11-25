#include <iostream>
using namespace std;
// se non si conoscono le funzioni scrivere tutto nel main

int massimo(int a, int b, int c) {
    int risultato = 0;

    if(a > b && a > c) {
        risultato = a;
    } else if(b > a && b > c) { 
        risultato = b;
    } else { 
        risultato = c;
    }
    return risultato;
}

int minimo(int a, int b, int c) {
    int risultato = 0;
    
    if(a < b && a < c) {
        risultato = a;
    } else if(b < a && b < c) {
        risultato = b;
    } else {
        risultato = c;
    }
    return risultato;
}

float media(int a, int b, int c) {
    float risultato = 0;
    risultato = (float)(a + b + c) / 3; // casting a float
    return risultato;
}

// se non si conosce il riferimento & si possono 
// chiedere i numeri nel main
void inserisci_numeri(int &a, int &b, int &c) {
    cout << "Inserisci il primo numero: ";
    cin >> a;
    cout << "Inserisci il secondo numero: ";
    cin >> b;
    cout << "Inserisci il terzo numero: ";
    cin >> c;
}

int main() {

    // dichiarazione di quattro variabili di tipo intero
    int numero1 = 0;
    int numero2 = 0;
    int numero3 = 0;
    int scelta = 0;
    // dichiarazione di una variabile di tipo float
    float risultato = 0;

    // stampa a video di una stringa
    cout << "Menu operazioni:" << endl;
    cout << "1: minimo di tre numeri" << endl;
    cout << "2: massimo di tre numeri" << endl;
    cout << "3: media di tre numeri" << endl;
    cout << "0: esci" << endl;
    cout << "Scelta? ";
    // lettura da tastiera di un numero intero
    cin >> scelta;

    // finche' la scelta e' diversa da 0
    // esegui il blocco di istruzioni
    while(scelta != 0) {
        // se la scelta e' 1 allora calcola il minimo
        if(scelta == 1) {
            // chiamo la funzione inserisci_numeri
            inserisci_numeri(numero1, numero2, numero3);

            // chiamo la funzione minimo
            risultato = minimo(numero1, numero2, numero3);
            cout << "Il minimo e': " << risultato << endl;
        } else if(scelta == 2) {
            // chiamo la funzione inserisci_numeri
            inserisci_numeri(numero1, numero2, numero3);

            // chiamo la funzione massimo
            risultato = massimo(numero1, numero2, numero3);
            cout << "Il massimo e': " << risultato << endl;
        } else if(scelta == 3) {
            // chiamo la funzione inserisci_numeri
            inserisci_numeri(numero1, numero2, numero3);

            // chiamo la funzione media
            risultato = media(numero1, numero2, numero3);
            cout << "La media e': " << risultato << endl;
        } else {
            // stampa a video di una stringa
            cout << "Scelta non valida!" << endl;
        }
        cout << "Scelta? ";
        // lettura da tastiera di un numero intero
        cin >> scelta;
    }

    return 0;
}