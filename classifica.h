#ifndef CLASSIFICA_CLASSIFICA_H
#define CLASSIFICA_CLASSIFICA_H

typedef struct Classifica{
    std::string nome;
    int punti;
} classifica_t;

void ordina_classifica (classifica_t& nuovo_utente, classifica_t classifica[]);
void mostraclassifica (classifica_t classifica[]);
#endif