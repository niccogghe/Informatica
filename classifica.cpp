#include <iostream>
#include "classifica.h"
using namespace std;

//Scrivo la funzione che ordina la classifica
void ordina_classifica(classifica_t & nuovo_utente, classifica_t classifica[]) {

    int posizione = 0;

    while (posizione < 10 && classifica[posizione].punti >= nuovo_utente.punti) { //Controlla dove è la posizione  fino a dove il numero è maggiore

        posizione++;
    }

    if (posizione >= 10) {

        return;
    }

    //La posizione finale viene spostata dell'indice
    for (int i = 9; i > posizione; i--) {

        classifica[i] = classifica[i - 1];
    }

    classifica[posizione] = nuovo_utente;
}

//Scrivo la funzione che mostra a schermo la classifica degli utenti che hanno giocato
void mostra_classifica(classifica_t classifica[]) {
    for (int i = 0; i < 10; i++) {
        classifica[i].punti=0;
        classifica[i].nome="" ;
        }
    }

