#include <iostream>
using namespace std;

int main() {

    // dichiarazione di quattro variabili di tipo float
    float a = 0;
    float b = 0;
    float x = 0;
    float y = 0;

    // stampa a video di una stringa
    cout << "Inserisci il valore di a: ";
    // lettura da tastiera di un numero intero
    cin >> a;

    // stampa a video di una stringa
    cout << "Inserisci il valore di b: ";
    // lettura da tastiera di un numero intero
    cin >> b;

    // stampa a video di una stringa
    cout << "Inserisci il valore di x: ";
    // lettura da tastiera di un numero intero
    cin >> x;

    // calcolo del valore dell'ordinata y
    y = a * x + b;
    // stampa a video del risultato
    cout << "Il valore dell'ordinata y e': " << y << endl;

    return 0;
}