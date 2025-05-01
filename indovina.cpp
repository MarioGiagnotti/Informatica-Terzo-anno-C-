#include <iostream>
#include <cstdlib>  // Per rand() e srand()
#include <ctime>    // Per time()

using namespace std;

int main() {
    // Inizializza il generatore di numeri casuali con il tempo corrente
    srand(time(nullptr));
    
    // Genera un numero casuale tra 1 e 10
    int numero_casuale = rand() % 10 + 1;
    int tentativo = 0;

    cout << "Indovina il numero (tra 1 e 10):" << endl;

    // Continua a chiedere all'utente finché non indovina
    while (true) {
        cout << "Inserisci un numero: ";
        cin >> tentativo;

        if (tentativo == numero_casuale) {
            cout << "OK! Hai indovinato il numero." << endl;
            break; // Esce dal ciclo quando l'utente indovina
        } else {
            cout << "Sbagliato! Riprova." << endl;
        }
    }

    return 0;
}
