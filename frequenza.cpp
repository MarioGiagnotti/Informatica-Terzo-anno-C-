#include <iostream>

using namespace std;

int main() {
    int numeri[10];
    int frequenza[10] = {0};

    cout << "Inserisci 10 numeri da 0 a 9:" << endl;

    for (int i = 0; i < 10; ++i) {
        cin >> numeri[i];
        frequenza[numeri[i]]++;
    }

    int numero_piu_frequente = numeri[0];
    int max_frequenza = frequenza[numeri[0]];

    for (int i = 0; i < 10; ++i) {
        if (frequenza[i] > max_frequenza) {
            max_frequenza = frequenza[i];
            numero_piu_frequente = i;
        }
    }

    cout << "Il numero inserito più volte è: " << numero_piu_frequente << " (inserito " << max_frequenza << " volte)" << endl;
    system("pause"); // Pausa fino a quando premi un tasto
    return 0;
}
