# Laboratorio 2: Hello world, overflow, precisione

In questo laboratorio scriveremo alcuni semplici programmi in C++. 

## Ricordate
- compilare: __g++ `<nomefilesorgente> ` -o `<nomefileeseguibile> `__
- eseguire:` ./<nomefileeseguibile> `

Niente spazi tra . e / e tra / e monefile
- convenzionalmente il file sorgente si indica con estensione .C oppure .cpp oppure .cxx. Questo consente, tra l'altro, anche a gedit di inferire la tipologia di contenuto del file e evidenziare la sintassi.

## Esercizio 0
Scrivete un programma che, letto in ingresso il vostro numero di matricola PRIVATO di LETTERE, stampi a video il messaggio

__Benvenuto `<matricola> `__

## Esercizio 1

Completate il programma contenuto nel file __letturaTastiera.C__.
In particolare
1. provate a leggere e a stampare un numero razionale e a registrarlo in un contenitore intero (variabile __int__).
1. provate a leggere un numero razionale dopo aver fatto il punto precedente.

## Esercizio 2
1. Scrivere un programma che, letto da tastiera un numero intero, stampi a video il numero successivo e il numero precedente a quello fornito in ingresso.
1. Immettete come input 2147483647. Sommate 1, registrate il valore ottenuto nella variabile intera __int c__ e stampate il risultato.
1. Sottraete 1 a __c__ e stampate il risultato.

Discutiamone....

## Esercizio 3
Scrivere un programma che legga in ingresso due numeri interi e li memorizzi nelle variabili __int a__ e __int b__ rispettivamente.

Stampare a video __a+b__, __a-b__, __a*b__ e __a/b__. Cosa osserviamo? 
Provate poi a stampare il risultato delle seguenti operazioni:
1. (1.0*a)/b
2. 1.0*(a/b)
3. a/(1.0*b)
Cosa osservate?

## Esercizio 4

Nella vita bisogna prendere decisioni e comportarsi di conseguenza...

Scrivere un programma che legge in ingresso un numero, diciamo __x__, intero e stampi a video il messaggio __"il numero è positivo"__ se __x>=0__ o __"il numero è negativo"__ altrimenti.

NOTA: si tratta di un argomento non introdotto in modo esaustivo (lo faremo nella prossima lezione). Fate riferimento alle slide associate a questo laboratorio e/o provate a controllare il documento a questo link https://en.cppreference.com/w/cpp/language/if e vedete cosa riuscite ad evincere...

## Esercizio 5

Scrivere un programma che, letto un intero nella variabile __int num__ determini e stampi a video se il numero è 
- positivo (__>=0__) e pari
- positivo e dispari
- negativo (non positivo) e pari 
- negativo (non positivo) e dispari

Questo richiederà di usare delle "selezioni annidate". Partite dal risultato dell'Esercizio 4 e aggiungete, sia nel blocco riferito al ramo __true__ del test, sia nel blocco riferito al ramo __false__ del test, un ulteriore test per verificare la parità del numero. 

NOTA: il resto della divisione del numero intero __a__ per due si calcola come __a%2__, e funziona anche con numeri negativi (ad esempio, -2 è pari...). Alternativamente, la funzione __abs(n)__, con __n__ intero, restituisce il modulo di __n__. La funzione __abs__ è contenuta nella libreria __cmath__, che deve essere  inclusa, all'inizio del file, con il comando

`#include <cmath>`