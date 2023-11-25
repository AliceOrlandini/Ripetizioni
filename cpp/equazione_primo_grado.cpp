#include <iostream>
using namespace std;

int main() {

    // dichiarazione di tre variabili di tipo float
    float a = 0;
    float b = 0;
    float x = 0;

    // stampa a video di una stringa
    cout << "Inserisci il valore di a: ";
    // lettura da tastiera di un numero intero
    cin >> a;

    cout << "Inserisci il valore di b (deve essere diverso da 0): ";
    cin >> b;
    // ----- questo solo se si conosce il costrutto while -----
    while(b == 0) {
        cout << "Il valore deve essere diverso da 0, inserisci b: ";
        cin >> b;
    }
    // ----- questo solo se si conosce il costrutto while -----

    // calcolo del valore dell'incognita x
    x = (-b) / a;
    // stampa a video del risultato
    cout << "La soluzione dell'equazione e': " << x << endl;
    
    return 0;
}