#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mialib.h"

int main(){
    elemento* primo = NULL;
    char scelta[2];

    printf("Vuoi inserire un elenco di studenti ? (s/n) ");
    scanf("%s",scelta);
    
    if(!strcmp(scelta,"s")){
        primo = (elemento*)malloc(sizeof(elemento));
        controllo(primo);
        printf("Inserisci il nome del primo studente: ");
        scanf("%s",((*primo).nome));
        printf("Inserisci il cognome del primo studente: ");
        scanf("%s",((*primo).cognome));
        printf("Inserisci la classe del primo studente: ");
        scanf("%s",((*primo).classe));
        printf("Inserisci l'eta' del primo studente: ");
        scanf("%d",&((*primo).eta));
        primo = inserimento(primo,scelta);
    }
    
    stampa(primo);
    
    svuotaLista(primo);
    
    return (EXIT_SUCCESS);
    }

    