#include <iostream>
#include <cstdlib>  // Per rand() e srand()
#include <ctime>    // Per time()

using namespace std;

int main() {
    srand(time(nullptr)); // Inizializza il generatore di numeri casuali

    // Generazione del punteggio del banco (tra 10 e 21)
    int punteggio_banco = rand() % 12 + 10; // Numeri da 10 a 21
    int punteggio_utente = 0;              // Punteggio iniziale dell'utente
    char scelta;                           // Scelta dell'utente: continuare o fermarsi

    cout << "Benvenuto al Blackjack!" << endl;
    cout << "Il banco ha già un punteggio nascosto tra 10 e 21." << endl;

    // Primo turno: dare una carta all'utente
    int carta = rand() % 10 + 1; // Genera un numero tra 1 e 10
    punteggio_utente += carta;
    cout << "La tua prima carta vale: " << carta << endl;
    cout << "Il tuo punteggio attuale e': " << punteggio_utente << endl;

    // Ciclo per chiedere se l'utente vuole un'altra carta
    while (true) {
        cout << "Vuoi un'altra carta? (s/n): ";
        cin >> scelta;

        if (scelta == 's' || scelta == 'S') {
            carta = rand() % 10 + 1; // Genera una nuova carta
            cout << "Hai pescato una carta da: " << carta << endl;
            punteggio_utente += carta; // Aggiorna il punteggio dell'utente
            cout << "Il tuo punteggio attuale e': " << punteggio_utente << endl;

            // Controllo se l'utente ha superato 21 (sballato)
            if (punteggio_utente > 21) {
                cout << "Hai sballato! Il tuo punteggio e' superiore a 21." << endl;
                cout << "Il banco vince!" << endl;
                return 0;
            }
        } else if (scelta == 'n' || scelta == 'N') {
            // L'utente si ferma
            cout << "Ti sei fermato con un punteggio di: " << punteggio_utente << endl;
            cout << "Il punteggio del banco e': " << punteggio_banco << endl;

            // Confronto dei punteggi per determinare il vincitore
            if (punteggio_utente > punteggio_banco) {
                cout << "Complimenti! Hai vinto contro il banco!" << endl;
            } else if (punteggio_utente < punteggio_banco) {
                cout << "Il banco vince! Ritenta la prossima volta." << endl;
            } else {
                cout << "Pareggio! Nessuno vince." << endl;
            }
            return 0;
        } else {
            // Input non valido
            cout << "Scelta non valida. Inserisci 's' per continuare o 'n' per fermarti." << endl;
        }
    }
    system("pause");
    return 0;
}
