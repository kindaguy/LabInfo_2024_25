# Laboratorio 4:  array...array...array

## Intro

In questo laboratorio lavoreremo con gli array (forse si poteva intuire dal titolo); ci concentreremo sulla parte di caricamento e stampa, e cercheremo di individuare quali sono le informazioni di cui è necessario disporre
per manipolare in modo consistente un array.

Introdurremo anche una nuova direttiva a preprocessore __#define__ ovvero le costanti "letterali".


## Esercizio 1

Scrivere un programma che, dichiarato un __array__ di 10 __int__

1. lo riempia integralmente con dati (interi) letti da tastiera.
2. finito il caricamento dei dati (10 interi letti da tastiera), stampi a video il contenuto dell'array.

Svolgere l'esercizio usando prima un ciclo __while__ precondizionale e un contatore, e poi usando un ciclo __for__.

## Esercizio 2

Modificare il programma al punto precedente in modo tale che l'utente possa terminare l'inserimento dei dati prima dell'inserimento dei 10 valori interi inserendo il valore sentinella 0. Notate che il valore sentinella non va inserito nell'array, perché non è un dato. Terminato l'inserimento il programma dovrà stampare a video il numero di dati caricati e tutti e soli i dati inseriti.

SUGGERIMENTO: il numero di dati che verrà inserito non è fissato a priori. Questo suggerisce l'uso di un ciclo  __while__ precondizionale.
SUGGERIMENTO: il numero di dati effettivamente contenuto nell'array deve essere registrato da qualche parte.

## Esercizio 3

Estendere l'Esercizio 2 come segue: una volta caricato il vettore di interi con valori letti da tastiera, trascrivere in senso inverso il contenuto del vettore in un altro vettore di 10 interi.
Per intenderci, il vettore contenente la sequenza

1 2 3 4 5

dovrà essere trascritto nel secondo vettore come

5 4 3 2 1

## Esercizio 4

Usando il risultato dell'Esercizio 3, scrivere un algoritmo che determini se la sequenza di numeri inserita è "palindroma". Una sequenza è definita _palindroma_ se è identicamente letta nella due direzioni (sx -> dx e dx->sx).

Il programma dovrà, in particolare, stampare a video il messaggio "È palindroma" se la sequenza inserita è palindroma, "NON è palindroma" altrimenti.

## Esercizio 5

Progettate un algoritmo che, caricata una sequenza di  n<=10 valori interi in un vettore di 10 interi, determini se la sequenza è palindroma. A differenza dell'esercizio precedente (Esercizio 4) qui NON dovete utilizzare un vettore ausiliario.

## Esercizio 6

Dichiarato un vettore __vett__ di 20 elementi di tipo __float__, chiedere all'utente quanti valori vorrà inserire e, una volta controllato che il numero di elementi da inserire sia >0 e <=20, caricare gli elementi (da tastiera).

Determinare e stampare a video quindi la _media campionaria_ e la _deviazione standard del campione_ degli elementi caricati. 

Ricordiamo che la deviazione standard del campione di N valori è definita come

$\sigma_C = \sqrt{\frac{1}{N}\sum_{j=1}^N (x_j - \bar{x})^2}$,

dove $\bar{x}$ è la  media campionaria.

Suggerimento: 
- $x^2$= __pow(x,2)__
- $\sqrt{x}$ = __sqrt(x)__
- __pow__ e __sqrt__ si trovano nella libreria __cmath__.
- La deviazione standard campionaria è un numero positivo...(a scanso di equivoci...)

## Esercizio 7

Considerato il vettore

__float dati[]={3.2,1.4,-3.2,1.7,6.1,7.4,0.3,-1.3,5.7,-2.1}__

Determinare e memorizzare la media _m_ e _sigmaC_ la deviazione standard del campione dei dati inseriti.

A questo punto l'utente dovrà inserire dei nuovi dati, che verranno registrati in un (diverso) vettore __nuovi__ di 20 __float__ opportunamente dichiarato.

ATTENZIONE: Il dato inserito dall'utente dovrà essere inserito nel  vettore __nuovi__ solo se non si tratta di un valore anomalo (_outliers_): un valore _v_ è anomalo se

__fabs(v-m) > 3*sigmaC__

dove
- __fabs(x)__ restituisce il valore assoluto di __x__, e si trova in __cmath__,
- __m__ e __sigmaC__ sono rispettivamente la media e la deviazione standard del campione del vettore __dati__ prima determinati.

Una volta letto il dato inserito da tastiera, questo dovrà essere prima controllato e poi, eventualmente, registrato nella prima posizione libera dell'array __nuovi__.

## Esercizio 8 (Crivello di Eratostene)

Si determinino i primi 50 numeri primi nel seguente modo: 
- dicharare un vettore __int primi[50]__
- assegnare __primi[0] = 2 __
- fino a che c'è spazio nel vettore, proporre un numero nuovo, diciamo _n_ (cominciando dal valore 3 e incrementando di volta in volta il valore nuovo di uno) e inserirlo nella prima posizione libera del vettore, che indichiamo con __i__, se __n%v[j] !=0__ per $j=i-1,i-2,...,0$.