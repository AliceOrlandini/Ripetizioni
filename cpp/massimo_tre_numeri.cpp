#include <iostream>
using namespace std;

int main() {

    // dichiarazione di quattro variabili intere
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int massimo = 0;

    // stampa a video di una stringa
    cout << "Inserisci tre numeri:" << endl;
    // lettura da tastiera di tre numeri interi
    cin >> num1;
    cin >> num2;
    cin >> num3;

    // calcolo del massimo tra i tre numeri inseriti
    // (soluzione senza operatori logici):
    if(num1 > num2) {
        massimo = num1;
        if(num3 > massimo) {
            massimo = num3;
        }
    } else {
        massimo = num2;
        if(num3 > massimo) {
            massimo = num3;
        }
    }
    // oppure si potevano utilizzare gli operatori logici:
    /* 
    if(num1 > num2 && num1 > num3) {
        massimo = num1;
    } else if(num2 > num1 && num2 > num3) {
        massimo = num2;
    } else {
        massimo = num3;
    } 
    */

    // stampa a video del risultato
    cout << "Il massimo e': " << massimo << endl;
    return 0;
}