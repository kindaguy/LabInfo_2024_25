#include <iostream>
#include <fstream>

using namespace std;

/*Dichiarazione funzioni*/
//Conta i dati (float) contenuti nel file di nome nomefile
//restituisce -1 in caso di problemi
int contaDati(const char nomefile[]);

//Carica i dati (float) da un file di nome nomefile in un vettore di float allocato dinamicamente
//Restituisce l'indirizzo dell'array allocato dinamicamente
//Salva il numero di dati nella variabile il cui indirizzo e` registrato in p_ndati
float * contaCaricaDati(const char nomefile[], int *p_ndati);

int main(){

   int ndati = 0;
   float *dati = NULL;
   char filename[] = "data.dat";

   dati = contaCaricaDati(filename, &ndati);
   if(dati == NULL){
      cout << endl << "main: Errore caricamento dati da file. Esco!" << endl;
      return -1;
   }
   //Se arrivo qui i dati sono stati correttamente caricati nell'array

   cout << endl << "Dati caricati!" << endl;
   for(int i=0; i<ndati; i++){
      cout<< endl << dati[i];
   }
   cout << endl;

   delete [] dati;

   return 0;
}

/*Definizione funzioni*/

int contaDati(const char nomefile[]){

   ifstream file_in;
   int conta = 0;
   float appo;

   file_in.open(nomefile);
   if(file_in.fail()){
      cout << endl <<  "contaDati: errore apertura file; esco!" << endl;
      return -1;
   }
   //Se arrivo qui tutto ok;
   file_in >> appo;
   while (!file_in.eof()){
      //Elaboro dato
      conta++;

      //Leggo dato successivo
      file_in >> appo;
   }

   return conta;

}


float * contaCaricaDati(const char nomefile[], int *p_ndati){

   int ndati = 0;
   float *v = NULL;
   ifstream file;

   ndati = contaDati(nomefile);
   if(ndati == -1){
      cout << endl << "contaCaricaDati: errore conteggio dati. Esco";
      *p_ndati = -1; //"Esporto anche un numero di dati negativo."
      return NULL;
   }
   //Se arrivo qui ho contato i dati
   *p_ndati = ndati;
   v = new float[ndati];
   if (v==NULL){
      cout << endl << "contaCaricaDati:  problema allocazione memoria. Esco";
      return NULL;
   }
   //Se arrivo qui ho lo spazio in memoria

   file.open(nomefile);
   //Posso anche assumere che il file sia a posto....
   for(int i =0; i<ndati; i++) file >> v[i];
   
   file.close();

   return v;

}
