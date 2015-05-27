#define MAX_STRLEN 30
#define MAX_CLASSLEN 4

struct s_elemento{
    char nome[MAX_STRLEN + 1];
    char cognome[MAX_STRLEN + 1];
    char classe[MAX_CLASSLEN + 1];
    unsigned int eta;
    struct s_elemento *prossimo;     
};
       
typedef struct s_elemento elemento;

elemento* inserimento(elemento* p,char scelta[]);
void stampa(elemento* p);
void svuotaLista(elemento* p);
void controllo(elemento* p);
