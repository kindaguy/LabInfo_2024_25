#include <iostream>
#include <fstream>

using namespace std;

void stampaArrayFloat(float v[],int n);
float calcolaMedia(float v[], int n);
void calcolaStats(float v[],int ndata, float *pmedia);

int main(){

   ifstream input;

   int ndati;
   float *dati = NULL;

   float media;

   float altramedia;

   input.open("dati_header.dat");

   if(input.fail()){
      cout << endl << "Problema apertura file. Esco!" << endl;
      return -1;
   }

   //Se arrivo qui stream input correttamente aperto

   input >> ndati;

   cout << endl << "Il numero di dati su file è: " << ndati << endl;

   //Creare il contenitore per i dati

   dati = new float[ndati];

   if(dati == NULL){
      cout << endl << "errore allocazione! Esco" << endl;
      return -1;
   }
   //Se arrivo qui, allocazione corretta.

   cout << endl << "Indirizzo inizio array: " << dati << endl;

   for(int i=0; i<ndati; i++){
      input >> dati[i];
   }

   //stampaArrayFloat(dati,ndati);
   cout << endl << "Note:" << endl;

   cout << "ind. Altramedia nel main: " << &altramedia << endl;
   media = calcolaMedia(dati,ndati);

   
   cout << endl<< "Media: " << media << endl;


   calcolaStats(dati,ndati,&altramedia);

   cout << endl<< "Altramedia: " << altramedia << endl;

   


   delete [] dati;
   return 0;
}

void stampaArrayFloat(float v[],int n){
   cout << endl << "Stampo array: " << endl;
   for(int i=0; i<n; i++){
      cout << endl << v[i];
   }
   cout << endl;
}
float calcolaMedia(float v[], int n){
   float accu = 0;
   for(int i=0; i<n; i++) accu+=v[i];
   return accu/n;
}

void calcolaStats(float v[],int ndata, float *pmedia){

   float pippo;
   cout << endl << "dentro alla funzione" << endl;
   cout << endl << "contenuto di pmedia: " << pmedia << endl;
   *pmedia = calcolaMedia(v,ndata);
   
   return; //Non necessario, ma se vi piace...

}