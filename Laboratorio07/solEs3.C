/*Qui propongo una soluzione dell'esercizio 3.
Riporto, qui sotto, la procedura per l'ordinamento di un vettore di interi
e la relative funzioni di ricerca minimo e scambio che scambia due elementi int per
consentire un confronto con la soluzione specifica dell'esercizio, che chiede di ordinare,
in parallelo, i due vettori di float che contengono, rispettivamente, le ascisse
e le ordinate dei punti*/



// int findMinRange(int v[],int ind_min, int ind_max){
 
//    int posMin = ind_min;
//    int min = v[ind_min];

//    for(int i=ind_min+1; i <= ind_max; i++){
//       if(v[i]<min){//Aggiorno valore e posizione del  minimo;
//          min = v[i];
//          posMin = i;
//       } 
//    }
//    return posMin;

// }


// void swapElementsArray(int v[],int p1, int p2 ){
//    int temp;
//    temp = v[p1];
//    v[p1] = v[p2];
//    v[p2] = temp;
// }

//  void selectionSort(int v[], int used){
//    int pMin;

//    for(int i=0; i<used-1; i++){
//        pMin = findMinRange(v,i,used - 1);
//       swapElementsArray(v,i,pMin);
//    }

//  }

//Soluzione

#include <iostream>
#include <fstream>
#include <cmath> //Per pow e sqrt

#define NN 50 //Dimensione array statici

using namespace std;


/* Dichiarazione e documentazione funzioni */


//Conta il numero di punti descritti sul file
//restituisce -1 se errore di qualche tipo
int contaPunti(const char filename[]);

//Carica i punti descritti sul file
//Le ascisse verranno registrate nel vettore a[]
//Le ordinate verranno registrate nel vettore b[]
//n è la dimensione, in memoria, dei vettori (non il numero di elementi caricati)
//restituisce il numero di punti caricati
//restituisce -1 se errore di qualche tipo
//La funzione richiama la funzione contaPunti;
int loadPunti(const char filename[], float a[], float o[], int n);

//Determina la posizione del punto piu` vicino all'origine
int posClosest(float a[],float o[], int n);

//Determina la posizione del punto piu` lontano dall'origine
int posFarthest(float a[],float o[], int n);

//Determina la posizione del punto più vicino all'origine nel range [i_min,i_max]
int findPosClosestRange(float a[],float o[], int i_min, int i_max);

//Scambia gli elementi in posizione p1 e p2 nei vettori a[] e o[]
void scambiaParallel(float a[],float o[], int p1, int p2);

//Ordina i punti in ordine di distanza dall'origine crescente
//Gli elementi dei vettori a[] e o[] vengono spostati "in parallelo"
void sortParallel(float a[], float o[], int n);

//Restituisce la distanza dall'origine di un punto di coordinate (x,y)
float distance(float x, float y);




/*Programma*/

int main(){

   int npunti = 0;

   float ascisse[NN];
   float ordinate[NN];

   char nome[] = "punti.dat";

   int posVicino;
   int posLontano;

   npunti  = loadPunti(nome, ascisse, ordinate, NN);

   if(npunti == -1){

      cout << endl << "Errore nel caricamento dei punti da file! Esco." << endl;
      return -1;
   }

   cout << endl <<"Punti caricati: " << npunti << endl; 
   for(int i = 0; i<npunti; i++){
      cout << endl << "("<< ascisse[i] <<","<< ordinate[i] << ")"; 
   }
   cout << endl;
   
   posVicino = posClosest(ascisse, ordinate, npunti);
   posLontano = posFarthest(ascisse, ordinate, npunti);

   cout << endl;
   cout << endl << "Il punto più vicino all'origine degli assi è il punto " 
      << posVicino << " di coordinate x: " << ascisse[posVicino] <<  ", y: " << ordinate[posVicino] << " d: " << distance(ascisse[posVicino],ordinate[posVicino])<<  endl;
   cout << endl << "Il punto più lontano all'origine degli assi è il punto "
      << posLontano << " di coordinate x: " << ascisse[posLontano] <<  ", y: " << ordinate[posLontano] << " d: " << distance(ascisse[posLontano],ordinate[posLontano])<<  endl; 
   cout << endl;

   sortParallel(ascisse, ordinate, npunti);

   cout << endl << "Punti ordinati in ordine di distanza dall'origine crescente: " << endl;
   for(int i = 0; i<npunti; i++){
      cout << endl << "("<< ascisse[i] <<","<< ordinate[i] << ") d: " << distance(ascisse[i], ordinate[i]); 
   }
   cout << endl;

   return 0;
}

/*fine programma*/

/*Definizione funzioni*/

int contaPunti(const char filename[]){
   
   ifstream file_in;
   int conta = 0;

   float appox, appoy;

   file_in.open(filename);
   if(file_in.fail()){
      cout << endl << "contaPunti: problema apertura file." << endl;
      return -1;
   }

   //Se arrivo qui stream ok
   file_in >> appox >> appoy;
   while(!file_in.eof()){
      //Elaboro dato
      conta++;

      //Leggo dato successivo
      file_in >> appox >> appoy;
   }
   //Fine conteggio dati
   //rilascio il file
   file_in.close();
   
   //Restituisco il numero di dati letti
   return conta;
}


int loadPunti(const char filename[], float a[], float o[], int n){
   int np = 0;

   ifstream file_in;

   //Conto i dati;
   np = contaPunti(filename);
   if(np == -1){
      cout << endl << "loadPunti: problema con conteggio dati. Esco." << endl;
      return -1;
   }

   //Se arrivo qui va tutto bene.
   cout << endl << "Numero punti descritti su file: " << np;
   if(np>NN){
      cout << endl << "Troppi dati per array. Esco." << endl;
      return -1;
   }

   //Apro stream per caricamento dati
   file_in.open(filename);
   //Controllo per scrupolo
   if (file_in.fail()){
      cout << endl << "loadPunti: problema seconda scansione file. Esco." << endl;
      return -1;
   }

   //So quanti dati devo caricare.
   for(int i=0; i<np; i++)
      file_in >> a[i] >> o[i];

   file_in.close();

   cout << endl << "Dati caricati!" << endl; 
   
   return np;

}

//Determina la posizione del punto piu` vicino all'origine
int posClosest(float a[],float o[], int n){

   //Il punto piu` vicino all'origine e`, all'inizio, il primo dell'array
   int pMin =0;
   float dMin = distance(a[0],o[0]);

   for(int i=1; i<n; i++){
      if(distance(a[i],o[i]) < dMin ){ //Aggiorno distanza minima e posizione minima
         dMin = distance(a[i],o[i]);
         pMin = i;
      }
   }

   return pMin;
}

//Determina la posizione del punto piu` lontano dall'origine
int posFarthest(float a[],float o[], int n){
   //Il punto piu` lontano all'origine e`, all'inizio, il primo dell'array
   int pMax =0;
   float dMax = distance(a[0],o[0]);

   for(int i=1; i<n; i++){
      if(distance(a[i],o[i]) > dMax ){ //Aggiorno distanza minima e posizione minima
         dMax = distance(a[i],o[i]);
         pMax = i;
      }
   }

   return pMax;

}

//Determina la posizione del punto più vicino all'origine nel range [i_min,i_max]
int findPosClosestRange(float a[],float o[], int i_min, int i_max){
   //Il punto piu` vicino all'origine e`, all'inizio, il primo dell'array
   int pMin = i_min;
   float dMin = distance(a[i_min],o[i_min]);

   for(int i=i_min + 1; i <= i_max; i++){
      if(distance(a[i],o[i]) < dMin ){ //Aggiorno distanza minima e posizione minima
         dMin = distance(a[i],o[i]);
         pMin = i;
      }
   }

   return pMin;

}

//Scambia gli elementi in posizione p1 e p2 nei vettori a[] e o[]
void scambiaParallel(float a[],float o[], int p1, int p2){
   //Stessa logica dello scambio di due componenti di un vettore ma applicato a due vettori "insieme"
   float appox,appoy;

   appox = a[p1];
   appoy = o[p1];

   a[p1] = a[p2];
   o[p1] = o[p2];

   a[p2] = appox;
   o[p2] = appoy;
   
   //La procedura non restituisce nulla e agisce per solo side effect sugli array
}

//Ordina i punti in ordine di distanza dall'origine crescente
//Gli elementi dei vettori a[] e o[] vengono spostati "in parallelo"
void sortParallel(float a[], float o[], int n){

   //Confrontatela con ordinamento di un singolo vettore!
   int pMin;

   for(int i=0; i < n-1; i++){
      pMin = findPosClosestRange(a,o,i,n-1);
      scambiaParallel(a,o,i,pMin);
   }

   //La procedura non restituisce nulla e lavora per side effect sugli array

}

//Restituisce la distanza dall'origine di un punto di coordinate (x,y)
float distance(float x, float y){
   return sqrt(pow(x,2)+pow(y,2));
}