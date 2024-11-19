# Laboratorio 8: puntatori e allocazione dinamica della memoria

# Esercizio 1

Scrivere una funzione __void scambia (int *p1, int *p2)__ che scambi il contenuto delle variabili "passate"  alla funzione. Scrivere anche una versione per __float__ (__void scambia(float *p1, float *p2)__) e modificale la funzione di ordinamento __SelectionSort__ definita la settimana scorsa, in modo tale che usi questa funzione di scambio invece di __void scambia(float v[], int pos1, int pos2)__.

# Esercizio 2

Il file __dati_header.dat__, già usato in laboratori precedenti, è così formato:

- Il primo valore è un intero che indica il numero __N__ di dati (razionali, in singola precisione) che seguono. 
- __N__ dati (__float__).

Scrivere un programma che:

1. Una volta letto il numero __N__ di dati _allochi dinamicamente_ un vettore di __N__ elementi __float__. 

1. Carichi i dati presenti sul file in un array di __float__. 
2. Ordini l'array usando l'algoritmo __selectionSort__, ovvero quello che sposta prima in testa all'array l'elemento più piccolo, in seconda posizione il secondo elemento più piccolo ecc....
3. Determini il minimo, il massimo, la mediana, la media e la deviazione standard dei dati. Il calcolo di queste statistiche deve essere effettuato da una funzione __void calcolaStats(float v[], int ndata, float *pmin, float *pmax, float *pmediana, float *pmedia, float *pstddev)__ che "restituisce" il valore delle statistiche richieste per _side-effect_.

I primi 3 e gli ultimi 3 valori dell'array ordinato, insieme a tutte le statistiche determinate al punto 3, devono essere stampati a video e REGISTRATI sul file __risultati.dat__.

ATTENZIONE: ricordatevi di rimuovere l'array allocato dinamicamente quando questo non serve più.
NOTA: potete (dovete) ricilare il codice scritto nei laboratori scorsi per il calcolo del massimo, minimo, media, deviazione standard orinamento e mediana di un vettore di dati __float__.

# Esercizio 3

Il file __data.dat__ contiene, riga per riga, un numero non precisato di valori razionali in singola precisione. Scrivere una funzione 

__int contaDati(const char nomefile[])__

che, ricevuto in ingresso il nome di un file come "stringa" (ovvero array di caratteri), restituisca il numero di dati presenti su file o -1 se si incontra qualche condizione di errore.

Verificato il corretto funzionamento della funzione, scrivere un programma che, contati gli _n_ dati presenti sul file __data.dat__ in un vettore di _n_ __float__ creato dinamicamente. 

Fatto questo, scrivete una funzione

__float * contaCaricaDati(const char nomefile[], int *p_ndati)__

che:
1. Riceve in ingresso un nome di file (vettore di caratteri).
2. Conta il numero di valori presenti su file; per far questo potete usare la funzione __contaDati__ definita qui sopra.
3. Alloca dinamicamente un vettore di dimensione pari al numero di dati e carica i dati da file nel vettore.
4. Restituisce l'indirizzo del vettore creato dinamicamente e, per side effect, il numero di dati caricati tramite il puntatore __p_ndati__.

Se la funzione dovesse incontrare problemi con l'apertura dello stream e/o con l'allocazione del vettore, dovrà restituire il valore __NULL__ e il valore -1 per i dati caricati. Sarà eventualmente responsabilità del programma/funzione chiamante gestire la situazione di "errore"

NOTA: la funzione __contaCaricaDati__ dovrà leggere il file 2 volte! La prima per contare il numero di dati e quindi allocare l'array della dimensione giusta; la seconda per caricare effettivamente i dati nel vettore. Tra le due letture sarà necessario "riavvolgere" lo stream su file, in modo tale che la lettura inizi dal primo dato e che eventuali flags di stato vengano resettati. I file __resetStream1.C__ e __resetStream2.C__ esemplificano due modi alternativi, ma equivalenti, di fare questa operazione.

# Esercizio 4

Il file __sfere.dat__ contiene un numero non precisato di coppie della forma $(\text{dato}, \text{colore})$, dove $\text{dato}$ è un valore razionale (__float__) e colore è un singolo carattere (__char__), nell'insieme $\{'b','g','r'\}$. Il file descrive un insieme di sfere di diverso diametro nominale, colorate di colore diverso (blu, giallo, rosso) per permettere ad un addetto di distinguerle facilmente. Il valore __float__ registrato sul file corrisponde al diametro effettivo della sfera (che può differire dal diametro nominale a causa di piccole imperfezioni del processo di produzione).

1. Contare e caricare i dati dal file in due vettori, allocati dinamicamente, che chiameremo __float *vdiams__ e  __char *vcols__. 
2. Determinare il diametro medio e lo scarto quadratico medio considerando tutte le sfere descritte nel file. Stampare a video il risultato.
3. Una volta determinato (e stampato a video) il numero __nrosse__ di palline "rosse", creare un vettore di dimensione __nrosse__ di valori __float__ e copiare al suo interno i diametri delle sole palline rosse. Cancellare il vettore dei diametri e quello dei colori (__delete [] vdiams; vdiams = NULL; delete [] vcols; vcols = NULL__) . 
4. Quale assegnamento ci consentirà di accedere al vettore dei dati sopravvissuto (ovvero le sole sfere rosse) usando __vdiam__?
5. Determinare e stampare a video la media e la deviazione standard delle palline rosse. Stampare quindi sul file __rosse.dat__ tutti i diametri delle palline rosse, la media e la deviazione standard dei diametri delle palline rosse.

