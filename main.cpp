#include <iostream>
#include "classifica.h"
using namespace std;

int main() {

    classifica_t classifica[10] = {};  //Inizializzo l'Array
    classifica_t utente; //Inizzializzo il nuovo utente

    int scelta;
    bool fine = false;

    //Faccio un while per far scegliere all'utente se vuole rinserire il punteggio oppure uscire
    while (fine==false) {

        cout << "------------[CLASSIFICA]-------------" << endl;
        cout << "[1]--> per aggiungere un utente." << endl; //Faccio un cout per un mini menù
        cout << "[2]--> per mostrare la classifica." << endl; //Faccio un cout per un mini menù
        cout << "[3]--> per uscire." << endl; //Faccio un cout per un mini menù

        cin >> scelta;

        switch (scelta) {


            case 1:
                cout << "Nome: "; //Inserisci nome
                cin >> utente.nome;
                cout << "Punteggio: "; //Inserisci punteggio
                cin >> utente.punti;

                ordina_classifica(utente, classifica); //Richiama la funzione che ordina la classifica dal più grande al più piccolo
                break;



            case 2: // Nel seguente caso mostra e stampa la classifica
                cout << "[--------Tabellone-------]" << endl;
                for (int i=0; i<10; i++){
                    if(classifica[i].punti>0){
                        cout << i+1 << ") " << classifica[i].nome << " P:" << classifica[i].punti << endl;
                    }
                }


            case 3:
                fine = true; // Se preme 3 esce dal gioco e finisce il ciclo
                break;


            default: //Se l'input non è compreso tra i numeri 1-2-3, rincomincia il ciclo
                cout << "Scelta Errrata. Riprova." << endl;
                break;
        }
    }

    return 0;
}
