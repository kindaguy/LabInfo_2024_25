# Laboratorio 6: Array: eliminazione elemento. Uso Files come sorgente e destinazione di dati.


# Esercizio 1
Scrivere una funzione

__int findElArray(int v[], int used, int val)__

 che, ricevuto in ingresso un array di interi (__int v[]__), il numero di dati (interi) in esso contenuto (__int used__) e  un valore intero da cercare (__int val__), restituisca la posizione della prima occorrenza di __val__ nell'array. Se il valore __val__ non c'è nell'array, la funzione deve restituire il valore -1.

__NOTA__: la funzione restituisce comunque un intero. Se il valore restituito è positivo, allora potrà essere interpretato come la posizione dell'elemento cerecato; se negativo, allora il valore restituito indicherà una condizione di "errore" (elemento non presente).

__SUGGERIMENTO__: per testare il funzionamento della funzione, dicharate nel main un array tipo:

__int dati[] = {0,1,2,3,4,5,6,7,8,9}__

così da avere immediato riscontro della correttezza del risutlato prodotto dalla funzione.

# Esercizio 2

Scrivete una funzione __deleteElSwap__ che elimini l'elemento in posizione __int pos__ in un vettore __int v[]__ di interi contenente __int used__ dati. La funzione dovrà avere signature

__int deleteElSwap(int v[], int used, int pos)__

ed effetturare la cancellazione dell'elemento in posizione __pos__ tramite __swap__ con l'ultimo elemento dell'array. La funzione dovrà restituire:

- il numero aggiornato di dati ancora presenti all'interno dell'array, se il valore di __pos__ è nel range di indici dell'array; attenzione: se l'array contiene un solo elemento, e __pos == 0__ la funzione dovrà limitarsi a restituire il valore zero.
- il valore -1 se __pos__ è fuori range (e magari stampare una stampa del tipo "Posizione fuori range!). In questo caso sarà compito della funzione chiamante capire che qualcosa è andato storto.

# Esercizio 3
Scrivere un programma che, usando le funzioni __findElArray__ e __delElSwap__ definite negli esercizi precedenti, elimini tutti i valori pari nell'array 

__int dati[] = {0,1,2,3,4,5,6,7,8,9}__

NOTE:
- assumiamo il valore zero come pari
- prestate attenzione a quello che fate dopo aver rimosso un elemento dall'array: quale elemento controllate al passaggio successivo?

# Esercizio 4
Scrivete una funzione __deleteElShift__ che elimini l'elemento in posizione __int pos__ in un vettore __int v[]__ di interi contenente __int used__ dati. La funzione dovrà avere signature

__int deleteElShift(int v[], int used, int pos)__

ed effetturare la cancellazione dell'elemento in posizione __pos__ tramite _shift_ a sx di una posizione di tutti gli elementi a dx dell'elemento eliminato. La funzione dovrà restituire un valore intero, come specificato per la funzione __deleteElSwap__ definita nell'elercizio 2. 


## Esercizio 5 (Ciclo Spoletini)



Il file __dati.dat__ contiene un numero non precisato di dati razionali (__float__). Scrivere un programma che determini il numero di dati presenti su file implementando il _ciclo Spoletini_. ATTENZIONE: il programma non dovrà caricare i dati da nessuna parte, solo deteminare il numero di valori scritti su file (sono 100...ed è lo stesso file di dati da cui caricavate i dati la volta scorsa...).

Ricordatevi che uno stream va chiuso quando non serve più (con l'istruzione __.close()__).

## Esercizio 6
Scrivere un programma che, dopo aver contato il numero di dati presenti nel fle __dati.dat__ (vedi Esercizio 5), li carichi in un __float dati[20]__. SPOILER ALERT: i dati presenti nel file sono 10, quindi in un vettore di 20 elementi ci stanno.

Fatto questo, calcolare la media e la deviazione standard del campione, usando ovviamente le funzioni definite nei laboratori precedenti. Determinare anche il massimo e il minimo elemento del vettore dei dati.

Salvare i risultati dell'analisi statistica (descrittiva), ovvero, media, deviazione standard, minimo e massimo, nel file __statistiche.dat__, corredati da opportune didascalie.

## Esercizio 7

Il file __dati_header.dat__ è come segue formato:
- il primo valore nel file è un intero, che indica il numero, chiamiamolo _n_ di dati (di tipo __float__) che seguono;
- seguono  _n_ dati di tipo __float__.

Scrivere un programma che carichi i dati in un vettore __float dati[20]__.

NOTA: a differenza dell'Esercizio 6, in questo esercizio la numerosità del campione è nota una volta letto il primo dato presente sul file, ovvero _n_. Non è quindi necessario, in questo caso, procedere con un conteggio prima di caricare i dati.

Questa volta, una volta caricati i dati e determinate la media e la deviazione standard del campione, dovrete eliminare dal campione eventuali outliers, registrando su file:
- la media
- la deviazione standard del campione
- il numero di dati eliminati
- i valori eliminati
- il vettore dei dati ripulito dagli outliers.

