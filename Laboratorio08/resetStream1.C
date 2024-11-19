#include <iostream>
#include <fstream>

using namespace std;

void stampaVettInt(int v[], int used);

int main(){


   ifstream file_in;
   int appo;
   int conta = 0;
   
   int *vint = NULL;
   int vint_size = 0;
   int vint_used = 0;
   
   //nomefile è una stringa (vettore costante di caratteri)
   const char nomefile[] = "dati_int.dat";

   //Apro stream su file
   file_in.open(nomefile);
   if(file_in.fail()){
      cout << endl << "Problema apertura file " << nomefile << endl;
      return -1;
   }

   //Se lo stream e`aperto correttamente
   //Ciclo Spoletini per il conteggio
   file_in >> appo;
   while(!file_in.eof()){
      conta++;
      file_in >> appo;
   }

   //Quando arrivo qui il file e` stato "consumato" e, in particolare, il flag eof che segnala il raggiungimento della fine del file è TRUE

   cout << endl << "Su file sono presenti " << conta << " dati interi." << endl;

   //Alloco dinamicamente un array di interi che possa contenere esattamente i dati presenti su file.
   vint = new int[conta];
   if(vint == NULL){ //Qualcosa e` andato storto con l'allocazione dinamica. Panico. Esco.
      cout << endl << "allocazione array male! Esco";
      return -1;
   }

   vint_size = conta;

   //A questo punto devo resettare lo stream per poter procedere con il caricamento
   //Metodo 1:

   file_in.close();
   file_in.open(nomefile);
   //Chiudendo e riaprendo lo stream su file ottengo un reset completo dello stato dello stream, incluso l'EOF.
   //Assumiamo che il file non venga toccato nei pochi millisecondi che sono intercorsi dalla prima lettura quindi:
   //1- il file c'e`
   //2- il numero di dati e` lo stesso, e lo conosco
   

   for(int i=0; i<conta; i++){
      file_in >> vint[i];
      vint_used++;
   }

   file_in.close();

   //Stampo vettore
   stampaVettInt(vint, conta);

   //Cancello array allocato dinamicamente.
   delete [] vint;
   vint = NULL;
   vint_size = 0;
   vint_used = 0;
   
   
   return 0;
}


void stampaVettInt(int v[], int used){

   cout << endl;
   cout << "Stampo vettore interi: " << endl;

   for(int i=0; i<used; i++) {
      cout << v[i] << endl;
   }
   cout << endl;
}
