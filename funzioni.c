#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mialib.h"

elemento* inserimento(elemento* p,char scelta[]){
        elemento* temp;
        int conta = 2;
        while(!strcmp(scelta,"s")){
            printf("Vuoi inserire i dati di un altro studente ? (s/n) ");
            scanf("%s",scelta);
                if(!strcmp(scelta,"s")){
	             temp = (elemento*)malloc(sizeof(elemento));
                     controllo(p);
	             printf("Inserisci il nome del %d° studente: ", conta);
	             scanf("%s", ((*temp).nome));
                     printf("Inserisci il cognome del %d° studente: ", conta);
	             scanf("%s", ((*temp).cognome));
                     printf("Inserisci la classe del %d° studente: ", conta);
	             scanf("%s", ((*temp).classe));
                     printf("Inserisci l'eta' del %d° studente: ", conta);
	             scanf("%d", &((*temp).eta));
	             (*temp).prossimo = p;
	             p = temp;
	             conta = conta + 1;
                }
        }
    return p;
    }

    void stampa(elemento* p){
        elemento* temp;
        temp = p;
        while(temp != NULL){
            printf("Nome: %s\nCognome: %s\nClasse: %s\nEta': %d\n",(*temp).nome,(*temp).cognome,(*temp).classe,(*temp).eta);
            temp = (*temp).prossimo;
        }
    }
    
    void svuotaLista(elemento* p){
        elemento* temp = NULL;
        while(p != NULL){
            temp = (*p).prossimo;
            free(p);
            p = temp;
        }
    }
    
    void controllo(elemento* p){
        if(p == NULL){
            fprintf(stderr,"ERRORE NELL'ALLOCAZIONE DELLA MEMORIA HEAP");
            exit(1);
        }
    }
