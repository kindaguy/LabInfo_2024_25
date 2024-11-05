#include <iostream>
#include <fstream>

#define NN 50
using namespace std;

int main(){

   //Calcolo i primi 50 numeri primi e li registro su file invece che stamparli a video.
   //Uso la soluzione dell'esercizio 8 del Laboratorio 4 (letteralmente copia-incollata)

   ofstream file_out;

   int primi[NN];
   int nprimi = NN;
   int ind;
   bool cond = true;
   int i=1;
   int numero = 3; //primo intero successivo al primo primo (2) gia` inserito
   primi[0]=2;

   while(i<nprimi){//Dovremo riempire tutto il vettore
      //Quando entro nel ciclo numero contiene in numero da ispezionare.
      ind=0; //Inizio a controllare la divisibilità del numero ispezionando
             //per i primi gia` trovati iniziando dal suo primo elemento
      cond=true;  //Prima di fare il primo controllo il numero da ispezionare e` presumibilmente
                  //primo       
      while(cond and ind < i){
         if(numero % primi[ind]==0){
            //La condizione qui sopra controlla se il numero e` divisibile per 
            //l'elemento del vettore dei primi di indice ind
            cond = false;
         }
         ind++; //Passo al confronto con il numero successivo
      }
      //Esco dal ciclo quando:
      //1-ho verificato che numero NON e` divisibile per nessuno dei primi fino ad ora determinati
      //  in questo caso: cond vale true
      //2-ho trovato che il numero e` divisibile per uno dei primi: cond vale false
      if(cond){ //!cond e` booleano => if(cond) e` come dire if(cond == true)
         primi[i] = numero;
         i++;
      }
      numero++;   //Incrementa di uno il numero da ispezionare
                  
   }

   //Apro stream in scrittura
   file_out.open("primi50primi.dat");
   //Controllo il buon fine dell'operazione
   if(file_out.fail()){
      cout << endl << "Problema apertura file di output" << endl;
      return -1;
   }
   //Se arrivo qui: tutto a posto.

   //Questa era la stampa a video
   // cout << endl << "Primi " << nprimi << " numeri interi: " << endl;
   // for(int i = 0 ; i < nprimi; i++){
   //    cout << "\t" << primi[i];
   // }
   // cout << endl;

   //Questa la stampa su file:
   //NB: identica alla stampa a video...ma con cout sostituito da file_out
   file_out << endl << "Primi " << nprimi << " numeri interi: " << endl;
   for(int i = 0 ; i < nprimi; i++){
      file_out << "\t" << primi[i];
   }
   file_out << endl;

   file_out.close();
   
   return 0;
}