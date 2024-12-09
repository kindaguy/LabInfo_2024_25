# Laboratorio 11: Make e makefile. Implementazione ADT contenitore via array.

## Esercizio 1
Definite una libreria __libStatistica__ (ovvero una coppia di files __libStatistica.h__ e __libStatistica.C__) che metta a disposizione funzioni per il calcolo di:

1. Media
2. Deviazione standard del campione
3. Elemento di valore minimo
4. Elemento di valore massimo

di un campione di dati di tipo __int__ e __float__. Verificate il funzionamento della libreria attraverso un programma driver sui file di dati __dati_int.dat__  e __dati_float.dat__, contenuti nella cartella. Usate il programma __make__ e quindi definite un __makefile__ per la compilazione e l'esecuzione del codice.

## Esercizio 2

Arricchite la libreria __libStatistica__ con una funzione per il calcolo della mediana. Questo richiederà l'uso di una funzione di ordinamento, e quindi l'inclusione di una qualche libreria di sorting (la vostra o la mia, vedete voi). Aggiornate quindi il __makefile__ in modo tale da compilare ed includere la libreria di sorting selezionata nel processo  di produzione del codice eseguibile.



## Esercizio 3

Lavoriamo sull'implementazione di un contenitore di dati interi (__int__) con array, come visto a lezione.

NOTA: quanto segue deve essere implementato all'interno di una libreria __contenitore__. Usate un programma __driver.C__ per verificare il corretto funzionamento delle funzioni di libreria.

Definita la t-upla:

__struct myArrayInt{__
   __int size;__
   __int used;__
   __int *raw;__
__};__

implementate le funzioni:

1. __void initContainer(myArrayInt &c)__: inizializza il contenitore __c__, passato per riferimento, al contenitore vuoto.

2. __int initContainer(myArrayInt &c, const char filename)__: inizializza il contenitore con il contenuto del file di nome __filename__. La funzione dovrà restituire 0 se tutto è andato bene, -1 se ci sono stati problemi con l'apertura del file, -2 se ci sono stati problemi con l'allocazione della memoria.

3. __int peek(myArrayInt c, int pos)__: restituisce il dato in posizione __pos__ dell'array se il valore di __pos__ è corretto, altrimenti avverte l'utente (con una stampa) e restituisce il valore zero.

3. __void print(myArrayInt c)__: questa funzione deve stampare il contenuto del contenitore (ovvero, solo i dati in esso presenti).

4. __int resize(myArrayInt &c, int newSize)__: questa funzione deve cambiare la dimensione in memoria dell'array. La funzione restituisce 0 se tutto è andato bene, -1 se ci sono stati problemi in allocazione di memoria.

5. __int append(myArrayInt &c, int val)__: inserisce il valore __val__ nell'array nella prima posizione libera. Se non ci fosse spazio residuo nell'array, la funzione deve richiamare la funzione resize per "allargare" l'array. Consideriamo un valore di "allargamento" di 10 posizioni; a tal fine usiamo una costante __#define INCR 10__. La funzione deve restituire 0 se tutto va bene, -1 se ci sono stati problemi di memoria.

6. __int *remove(myArrayInt &c, int pos)__: rimuove l'elemento in posizione __pos__ se __pos__ è un indice valido. La funzione restituisce l'indirizzo di una "copia" del valore in posizione __pos__ se __pos__ è valido, altrimenti restituisce __NULL__. NOTA: nella funzione usate:
__int *appo;__
__appo = new int;__
__*appo  = c.raw[pos];__
__...cancellazione effettiva per swap o shift...__
__return appo;__


7. __void sortIncr(myArrayInt &c)__: ordina i dati nel contenitore in ordine non decrescente.

8. __bool isSortedIncr(myArrayInt c)__: verifica se i dati contenuti nel contenitore sono ordinati in ordine non decrescente. Restituisce __true__ se i dati sono ordinati, __false__ altrimenti.

9. __int insert(myArrayInt &c, int dato)__: inserisce un nuovo dato nel contenitore. Se il contenitore è ordinato, inserisce il dato nella posizione idonea a mantenere l'ordinamento. Se il contenitore non è ordinato, inserisce il nuovo dato in coda all'array. La funzione restituisce 0 se tutto va bene, -1 se ci sono stati errori di allocazione di memoria.

10. __int search(myArrayInt c, int val)__: la funzione deve cercare una occorrenza del valore __val__; se lo trova, restituisce la posizione all'interno dell'array. Altrimenti restitisce -1. ATTENZIONE: se l'array è ordinato (cosa verificabile con le funzione __isSortedIncr__ definita prima) allora la ricerca potrà essere fatta con l'algoritmo di ricerca binaria; altrimenti dovremo fare una ricerca lineare (da sinistra verso destra).

11. __void dispose(myArrayInt &c)__: la funzione deve ripristinare lo stato di contenitore vuoto (__size = used = 0, raw = NULL)__, deallocando, se presente, l'array dei dati.

12. __int deepcopy(myArrayInt source, myArrayInt &dest)__: la funzione deve fare una copia deep della t-upla __source__ nella t-upla, dello stesso tipo, __dest__. La funzione restituisce 0 se tutto va bene, -1 se insorgessero problemi di memoria. 

NOTA: se una funzione/procedura deve in qualche modo modificare la t-upla, passo la t-upla per riferimento, in modo tale che la funzione/procedura possa agire per side-effect. Altrimenti passo la t-upla per valore, proteggendo così la t-upla da modifiche involontarie (la funzione/procedura accederà ad una copia (sebbene shallow) della t-upla).
