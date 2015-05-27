#define MAX_STRLEN 30

struct s_elemento{
    char nome[MAX_STRLEN];
    char cognome[MAX_STRLEN];
    char classe[MAX_STRLEN];
    unsigned int eta;
    struct s_elemento *prossimo;     
};
       
typedef struct s_elemento elemento;

elemento* inserimento(elemento* p,char scelta[]);
void stampa(elemento* p);
void svuotaLista(elemento* p);
void controllo(elemento* p);
