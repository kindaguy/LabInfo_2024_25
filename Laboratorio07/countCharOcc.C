/*In questo programma conteremo le occorrenze dei caratteri in un testo.
Il testo da analizzare è contenuto in un file specificato.
*/

#include <iostream>
#include <fstream>

#define NCHARS 256
using namespace std;


//Questa funzione restituisce la posizione del massimo in un vettore di interi v contenente used elementi.
int findMax(int v[],int used);

//Questa funzione restituisce la posizione del massimo in un vettore di interi v nel range di indici [ind_min,...,ind_max].
int findMaxRange(int v[],int ind_min, int ind_max);




int main(){

   //Ricordiamo che i caratteri sono codificati su 8 bit (1 byte).
   //Ci sono quindi 2^8=256 caratteri 
   int counts[NCHARS];
   int counts_size = NCHARS;
   int counts_used = 0;
   int pos_max_occ;
   char appo;
   int total = 0;

   ifstream file_in;

   

   for(int i=0; i<counts_size; i++) counts[i] = 0;
   counts_used = counts_size;

   file_in.open("dc_inf_1.txt");
   if(file_in.fail()){
      cout << endl <<"Problema apertura file! Esco";
      return -1;
   }
   //Se arrivo qui stream di input associato correttamente a file.

   //Adesso comincia il conteggio dei caratteri.
   //Come al solito, usiamo il ciclo Spoletini:
   //1-Leggo dato (fuori ciclo)
   //2-Controllo che il dato ci sia (stream non in stato EOF)
   //3-"Elaboro dato"
   //4-Leggo dato successivo
   //Torno a testare condizione in 2-

   //Qui stiamo attenti: se leggessimo i caratteri del testo
   //usando l'operatore di estrazione da stream, che e` "smart"
   //verrebbero ignorati gli spazi e gli a-capo, che in realtà vorrei 
   //conteggiare...
   //...quindi uso una lettura più ignorante...che tratta tutti i caratteri
   //nello stesso modo.

   appo = file_in.get();
   while(!file_in.eof()){
      counts[ appo]++;
      appo = file_in.get();
      cout << endl << "letto:" << (int) appo << endl;
   }
   //I caratteri con codifica tra 0 e 31 sono caratteri di "escape" che hanno una funzione particolare
   //Non li stampiamo, ma se volete vederli basta modificare il punto di inizio del ciclo a i=0;
   for(int i=32; i<counts_size; i++){
      cout << "\t" <<(char) i << ": "<<  counts[i];
      if(i%10==0) cout << endl;
   }
   cout << endl;

   //Quale è il carattere che occorre maggiormente?

   pos_max_occ = findMax(counts,counts_used);

   cout << endl << "Il carattere con maggiori occorrenze è: " << (char) pos_max_occ << " con " << counts[pos_max_occ] << " occorrenze" << endl;

   //Tabella ascii visualizzabile al link: https://commons.wikimedia.org/wiki/File:ASCII-Table-wide.svg
   pos_max_occ = findMaxRange(counts,65,122);

   cout << endl << "Il carattere alfabetico (no spazi e simboli di punteggiatura) con maggiori occorrenze è: " << (char) pos_max_occ << " con " << counts[pos_max_occ] << " occorrenze" << endl;

   cout << endl << "Occorrenze a-capo" << counts[13] << endl;

   cout << endl << "Occorrenze line-feed " << counts[10] << endl;

   for(int i=0; i<NCHARS; i++) total += counts[i];

   cout << endl << "Numero di caratteri letto: " << total << endl;

   return 0;
}


/*Definizione funzioni*/
int findMax(int v[],int used){
   int posMax = 0;
   int max = v[0];

   for(int i=1; i<used; i++){
      if(v[i]>max){//Aggiorno valore e posizione del  minimo;
         max = v[i];
         posMax = i;
      } 
   }
   return posMax;
}

int findMaxRange(int v[],int ind_min, int ind_max){
 
   int posMax = ind_min;
   int max = v[ind_min];

   for(int i=ind_min+1; i <= ind_max; i++){
      if(v[i]>max){//Aggiorno valore e posizione del  minimo;
         max = v[i];
         posMax = i;
      } 
   }
   return posMax;


}

