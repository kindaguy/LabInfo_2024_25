# Laboratorio 3: selezione, cicli (pre-condizionale,post-condizionale,for). Array.


## Ricordate
- compilare: __g++ `<nomefilesorgente> ` -o `<nomefileeseguibile> `__
- eseguire:` ./<nomefileeseguibile> `

Niente spazi tra . e / e tra / e nomefile
- convenzionalmente il file sorgente si indica con estensione .C oppure .cpp oppure .cxx. 

## Esercizio 1
Implementate le soluzioni degli esercizi 1 e 2 discussi a lezione venerdì scorso. Le tracce degli esercizi sono disponibili nel file __exLectio_20241011.pdf__.


## Esercizio 2

Scrivere un programma che, chiesti all'utente in ingresso (lettura da tastiera) due numeri interi __a__ e __b__:
1. Salvi il valore più piccolo e il più grande rispettivamente in una variabile  di nome __minimo__ e __massimo__ (di tipo __int__).
2. Stampi a video __"Intervallo positivo"__ se l'intervallo _aperto_ __(minimo,massimo)__ è interamente contenuto nel semiasse positivo, __"Intervallo negativo"__ se invece è  contenuto nel semiasse negativo, __"Include zero"__ altrimenti.

## Esercizio 3
Scrivere un programma che:
1. Chiede all'utente di definire un intervallo __[a,b]__ (vedi __Esercizio 2__). A questo punto abbiamo definito un range di valori _validi_ [a,a+1,...,b-1,b].
2. Successivamente alla definizione del range, chiede all'utente di inserire il valore intero, chiamiamolo __val__ finché il valore inserito non è all'interno del range dei valori validi.



## Esercizio 4
Modificare il programma che calcola la media di valori interi (soluzione dell'Esercizio 3 proposto a lezione) in modo tale che i valori inseriti siano nel range [18,19,...,30] (simuliamo l'inserimento di voti d'esame, senza considerare la lode).

## Esercizio 5
Modificare il programma al punto precedente considerando come segue:
1. Chiedere all'utente quanti voti vuole inserire e registrare il valore in una variabile intera __nvoti__. Imporre che il valore letto appartenga al range [18,19,...,30], ovvero continuare a chiedere all'utente di inserire il numero di voti fino a che non inserisce un valore valido.

Notate che a questo punto sappiamo quanti voti dovranno essere caricati.

2. Leggere gli __nvoti__ voti ad uno ad uno controllando, per ogni voto inserito sia valido, ovvero nel range __[18,19,...30]__ (vedi Esercizio 4).


__Suggerimento:__ in questo caso il numero di iterazioni del ciclo è noto a priori. Provate a usare un cilco precondizionale (__while(cond){}__) e un contatore e POI provate ad usare il ciclo __for__ descritto nel file __preLab3.pdf__

## Esercizio 6

Modificare il programma scritto nell'esercizio 5 nel seguente modo:

1. Dichiarare un vettore di 30 interi. 

2. Chiedere all'utente quanti voti vuole inserire, controllando che il _numero di voti_ sia $1\leq$__nvoti__$\leq 30$ 

3. Registrare i voti _validi_ inseriti nel vettore fino a quando l'utente termina l'inserimento dei voti.

5. Determinare e stampare a video il numero di voti inseriti e la media aritmetica dei voti.

## Esercizio 7
Scrivere il codice che implementa l'algoritmo di Euclide per il calcolo del Massimo Comun Divisore (MCD) visto a lezione, con le seguenti specifiche
1. Se anche solo uno degli operandi fosse negativo, il programma dovrà  stampare il messaggio: __Non funziono su numeri negativi__
1. Se anche solo uno dei due numeri è 0, il programma deve stampare: __Operazione non definita__
1. Altrimenti, il programma deve stampare il MCD ottenuto con l'algoritmo.

