/*File header della libreria*/

//Includo le librerie necessarie
#include <iostream>
#include <cstring>
//Fine

using namespace std;

/*NOTA: questo costrutto, costituito da un abbinamento di direttive 
a preprocessore garantisce di non includere la dichiarazione 
delle funzioni che seguono più di una volta nei programmi
che includono libSortingTama.h*/

//Direttiva a preprocessore che verifica se la costante
//LIBSORTINGTAMA_H NON è definita (#ifndef)
#ifndef LIBSORTINGTAMA_H
//Se true (ovvero LIBSORTINGTAMA_H non è definita)
//allora la definisce 
#define LIBSORTINGTAMA_H
//Dichiaro le funzioni della librerie
void merge(int [],int,int,int);
void merge_sort(int[],int, int);

void sel_sort(int [], int );
int pos_min(int [], int,int);

void scambia(int *, int *);

//Fine del blocco true dell'#ifndef
#endif
//Non c'è il ramo else della selezione


/*In pratica: se un programma o una libreria include libSortingTama.h 
la costante LIBSORTINGTAMA_H viene definita. Se qualche altro
programma/libreria includesse a sua volta libSortingTama.h potrebbe
accadere che le funzioni dicharate vengano dichiarate più volte 
(ricordate che #include "...." copia/incolla il contenuto del file ...)
Con il costrutto #ifndef ... #define ... #endif, si impedisce che questo
possa accadere: la prima volta che #include ... viene eseguita
la costante (qui LIBSORTINGTAMA_H) viene definita; qualsiasi altra chiamata
di #include "..." troverebbe la costante definita e quindi non includerà 
le dichiarazioni delle funzioni. 

REGOLA: usate il costrutto in ogni .h delle vostre librerie: vi eviterete
un sacco di grattacapi.
*/