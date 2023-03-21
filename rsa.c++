//libreria
#include <iostream>
#include <math.h>

int main(){
	using namespace std;
    //variabili
    int p=0, q=0, n=0, z=0, e=0, d=0, k=1, m=0;
    //variabile di controllo per p e q
    bool primo;

    //do while per controllare p e q siano primi, eventualmente farli rinserire dall'utente
    do {
        cout << "Inserisci p: ";
        cin >> p;

        primo = true;

        // Controllo se p sia un numero primo
        for (int i = 2; i <= p / 2; ++i) {
            if (p % i == 0) {
                primo = false;
                break;
            }
        }

        if (!primo) {
            cout << "p non e' un numero primo. Riprova." << endl;
            continue;
        }

        cout << "Inserisci q: ";
        cin >> q;

        primo = true;

        // Controllo se q sia un numero primo
        for (int i = 2; i <= q / 2; ++i) {
            if (q % i == 0) {
                primo = false;
                break;
            }
        }

        if (!primo) {
            cout << "q non e' un numero primo. Riprova." << endl;
        }

    } while (!primo);
    
    cout << "Inserisci e: ";
    cin >> e;
    
    //Calcolo di n e z
    n=p*q;
    z=(p-1)*(q-1);
    
    cout << "Il valore di n e': " << n << endl;
    cout << "Il valore di z e': " << z << endl;


    //while per controlla che d sia intero ed eventualmente non lo sia incrementare k
    while (true) {
        d = (k * z + 1) / e;
        if ((k * z + 1) % e == 0) {
            cout << "Il valore di d e': " << d << endl;
            break;
        }
        k++;
    }

    //stampa delle chiavi
    cout <<"La chiave publica e' (" << e << "," << n <<")" << endl;
    cout <<"La chiave privata e' (" << d << "," << n <<")" << endl;
    
	cout << "Inserisci m: ";
    cin >> m;
	//Calcolo di c
    double c_temp=pow(m,e);
    double c=fmod(c_temp,n);
    cout << "Il valore di c e': " << c << endl;
}
