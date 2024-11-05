#include <iostream>
#include <fstream>

#define SIZE 50
using namespace std;

//Il programma conta il numero di dati interi presenti nel file
//dati_int.dat

int main(){
   
   ifstream file_in; //Stream di input
   int conta = 0;
   int appo;

   //Vettore dove andro` a caricare i dati
   int dati_int[SIZE];
   int dati_int_used = 0;
   int dati_int_size = SIZE;

   //Associo file a stream
   file_in.open("dati_int.dat");
   //NOTA: dati_int.dat si trova nella stessa cartella del programma
   //posso usare il nome relativo.

   //Controllo buon esito dell'operazione
   if(file_in.fail()){
      cout << endl << "Qualcosa e` andato storto! Esco!" << endl;
      return -1;
   }

   //Se arrivo qui lo stream è aperto e in buono stato

   file_in >> appo;
   while(!file_in.eof()){//Se il dato c'e`, ovvero non ho esaurito il file
      //Elaboro dato
      //Incremento contatore
      conta++;

      //Leggo il dato successivo
      file_in >> appo;
   }

   //Ho fatto quel che mi serviva fare con il file.
   file_in.close(); //Rilascio il file.
   cout << endl << "Sul file sono presenti " << conta << " dati interi" << endl;

   //Adesso carico i dati nel vettore dati_int. 
   //Il vettore è sufficientemente grande da contenere tutti i dati presenti su file.
   //Piu` avanti nel corso impareremo a creare vettori "della dimensione giusta" durante
   //l'esecuzione del codice, ma per ora lavoriamo cosi`.

   //Riapro lo stream su file dati_int.dat.
   //Riaprendo lo stream, leggo il file nuovamente dall'inizio, come gia` fatto sopra
   file_in.open("dati_int.dat");

   //Controllo buon esito dell'operazione...better safe than sorry
   if(file_in.fail()){
      cout << endl << "Qualcosa e` andato storto! Esco!" << endl;
      return -1;
   }

   //Adesso, pero`, so quanti dati dovro` leggere. Uso quindi il seguente costrutto

   for(int i = 0; i < conta; i++){
      file_in >> dati_int[i];
   }
   file_in.close();
   //Aggiorniamo le informazioni sull'array
   dati_int_used = conta;

   //Stampiamo i dati caricati
   cout << endl << "Contenuto del vettore: " << endl;
   
   for(int i=0; i<dati_int_used; i++){
      cout << endl << dati_int[i];
   }
   cout << endl;

   return 0;
}