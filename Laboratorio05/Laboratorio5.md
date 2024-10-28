# Laboratorio 4: funzioni, semplici operazioni su array

## Intro

- Array: una buona prassi.
- Funzioni: dove e come.




## Esercizio 1

Definire una funzione di nome __leggiValido__ che:

1. prende in ingresso due valori __float__, come parametri formali __float min__ e __float max__ che individuano gli estremi di un intervallo chiuso e limitato __[min,max]__. 
2. chiede all'utente di inserire un valore e controlla che il valore inserito sia nell'intervallo __[min,max]__, fino a che il valore inserito non è _valido_, ovvero nell'intervallo.
3. restituisce il primo valore _valido_ inserito dall'utente.

NOTA: si tratta di incapsulare, in modo opportuno, il codice scritto per la soluzione dell'Esercizio 3.2 del Laboratorio 3. La funzione non deve controllare che sia __min <= max__.


## Esercizio 2

Usando la funzione le __leggiValido__ definita nell'esercizio precedente, caricare in un array di 10 elementi al massimo 10 valori di tipo __float__ con valori compresi tra -5.0 e 5.0. L'inserimento dei valori deve poter terminare prima che 10 valori, _ma almeno uno_, siano stati inseriti. Selezionate il costrutto di iterazione che meglio si addice alla richiesta.

Completato l'esercizio, scrivere una  funzione che prende in ingresso:
- un vettore di __float__,
- la sua dimensione,
- il valore del massimo e del minimo dell'intervallo dei valori ammissibili,

e, completato il caricamento dei valori nell'array, restituisca il numero di elementi effettivamente caricati.


## Esercizio 3

Definire le funzioni:

- __float media(float v[], int ndati)__
- __float devstd(float v[], int ndati)__

che calcolino, rispettivamente, la media e la deviazione standard di una _n-upla_ __v__ contenente __ndati__ dati di tipo __float__.

A tal fine potrebbe essere utile sapere che la libreria __cmath__ 
(__#include \<cmath\>__)
mette a disposizione le funzioni

__float pow(float a, float p)__
e
__float sqrt(float a)__

che calcolano, la prima la potenza _p_-esima del numero _a_ e la seconda la radice quadrata di _a_.
P.S.: __sqrt(a) = pow(a,0.5f)__.

## Esercizio 4

Definire una funzione __isOutlier__ che, preso in ingresso un valore intero __val__ e due valori __float__ __media__ e __standardDev__, restituisca

- __true__ se __|val-media|>3*standardDev__
-  __false__ altrimenti

P.S.: di che tipo è il valore restituito dalla funzione?
P.P.S.: __|a| = fabs(a)__ (__fabs__ definita in __cmath__).


## Esercizio 5

Scrivere una funzione

__void scambia(int v1, int v2)__

che scambi il contenuto delle variabili intere __v1__ e __v2__.

Controllate i valori delle variabili passate come parametri attuali alla funzione prima e dopo la chiamata di scambia.

NOTA: la parola __void__ è una parola chiave del linguaggio e indica il "tipo" _nessun tipo_. È usata in diversi contesti, ma in questa specifica istanza indica che la funzione non restituisce nulla, ovvero è una _procedura_.

## Esercizio 6
Scrivere una funzione 

__void scambia(int v[], int n, int i, int j)__

che scambi le componenti di un vettore (di __n__ elementi) in posizione __i__ e __j__. La funzione dovrà controllare che entrambi gli indici siano all'interno del range __[0,1,..,n-1]__. In caso il controllo fosse negativo (almeno uno dei due indici fuori range) la funzione dovrà stampare a video il messaggio "Indici fuori range"  e non fare nulla.

Verificare il comportamento della funzione __scambia__ qui definita stampando il contenuto dell'array passato come parametro attuale alla funzione sia prima che dopo la chiamata della stessa.


## Esercizio 7

Scrivere una funzione __int deleteEntrySwap(float v[], int size, int used,  int where)__ che, preso in ingresso un vettore di __float__ di dimensione __n__, contenente __used__ dati, elimini l'elemento in posizione __where__ sovrascrivendo il dato ivi contenuto con l'ultimo dato (valido) dell'array (ovvero in posizione __used-1__). La funzione dovrà restituire il nuovo numero di elementi validi dell'array (__used - 1__). ATTENZIONE: la funzione dovrà controllare che __where__ sia nel range di indici validi dell'array, ovvero __0....used-1__. In caso contrario la funzione dovrà  limitarsi a stampare il messaggio "Eliminazione non possibile: indice fuori range"  e restituire il valore __used__.


## Esercizio 8

Scrivere una funzione __int deleteEntryShift(float v[], int size, int used,  int where)__ che, preso in ingresso un vettore di __float__ di dimensione __n__, contenente __used__ dati, elimini l'elemento in posizione __where__ sovrascrivendo il dato ivi contenuto con il dato successivo e "shiftando" tutti gli elementi successivi a sinistra di una posizione. Come nell'esercizio precedente, la funzione dovrà restituire il nuovo numero di elementi validi dell'array (__used - 1__) e rilevare eventuali richieste di cancellazione di un dato non presente.