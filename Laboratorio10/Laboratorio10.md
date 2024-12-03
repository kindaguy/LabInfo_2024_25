# Laboratorio 10: Mergesort, sorting, definizione e uso librerie.

## Esercizio 1
Il file __sorting.C__ contiene l'implementazione dell'algoritmo Mergesort discusso durante l'ultima lezione, e un'implementazione di SelectionSort.
Il codice è documentato e lo ispezioneremo insieme. 

Entrambe gli algoritmi lavorano su vettori di interi. 

1. Definire le funzioni __merge__, __merge_sort__, __sel_sort__ e le funzioni accessorie necessarie per ordinare vettori di __float__ e __double__. 
2. Definire le funzioni __merge__, __merge_sort__, __sel_sort__ e le funzioni accessorie necessarie per ordinare un vettore di __puntoR2__ in ordine di distanza dall'origine degli assi non decrescente.
3.  Definire le funzioni __merge__, __merge_sort__, __sel_sort__ e le funzioni accessorie necessarie per ordinare un vettore di __sfera__ in ordine di colore non decrescente. NOTA: i __char__ sono ordinati, perché è ordinato l'inisieme degli interi su cui vengono mappati dalla codifica ASCII. Per intenderci __'a' < 'b' < 'c'__ ecc...

## Esercizio 2

Create la libreria __libSort__, contenente le routines di ordinamento di vettori di tipi primitivi __int__, __float__, __double__. 

Create quindi i  file:
- __libSorting.h__: dichiarazione delle funzioni, opportunamente corredate da documentazione per l'uso delle funzioni.
- __libSorting.C__: definizioni delle funzioni. Deve includere le dichiarazioni tramite comando __#include "libSorting.h"__.

Verificate il corretto funzionamento della libreria, ovvero provate ad usarla per ordinare vettori di interi e razionali caricati in qualche modo.


## Esercizio 3
Create una libreria __libStatistica__ che raccolga le funzioni per l'analisi statistica (descrittiva) di un campione di dati primitivi (ad es. __float__, __int__ ecc...).

La libreria dovrà anche contenere una funzione per il calcolo della mediana. Come sappiamo, per calcolare la mediana di  un campione è necessario ordinare il campione. Quindi la libreria __libStatistica__ dovrà usare, da qualche parte, una funzione di ordinamento, e quindi richiamare la libreria __libSorting__ definita nell'esercizio precedente. Però prestate attenzione: l'ordinamento, funzionale al calcolo della mediana, dovrà essere fatto su una copia del campione e non sul campione stesso che, salvo diverse indicazioni, non deve essere permutato. 

 ## Esercizio 4

 Cominciamo a definire  una libreria __libMyArrayFloat__ per la gestione di array __float__. A tal fine definiremo, in __libMyArrayFloat.h__  la t-upla

__struct myArrayFloat{
   int size;
   int used;
   float *raw;
 };__

 La libreria dovrà contenere le funzioni:

 - __myArrayFloat loadArrayFile(const char filename[])__ che carica l'array dal file di nome __< filename >__. Se qualcosa va storto, la t-upla restituita dovrà avere __size = -1, used = 0, raw = NULL__.

 - __void printArray(myArrayFloat & my)__ che stampa il contenuto dell'array a video
 
 - __int printArrayFile(const char filename[], myArrayFloat & my)__ che salva la descrizione dell'array in un file di nome __< filename >__. Se qualcosa andasse storto (ovvero ci fossero, improbabili, errori con l'apertura dello stream), la funzione dovrà restituire il valore -1, altrimenti restituisce il valore 0.

 _ AVANZATO: __ostream& printArrayFile(ostream &out, myArrayFloat & my)__ che salva il contenuto dell'array, compresa il numero di dati (__used__) su uno stream di output (__ostream__) passato per riferimento. In questo caso il l'associazione del file di output allo stream (apertura del file di uscita) deve precedere la chiamata della funzione, mentre la chiusura deve seguire la chiamata della funzione.  NOTA: __ostream__ indica uno stream di output: __ofstream__ e lo schermo sono entrambi __ostream__. Per chiarimenti, contattare il docente.