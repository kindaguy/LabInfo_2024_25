/*
Si determinino i primi 50 numeri primi nel seguente modo: 
- dicharare un vettore __int primi[50]__
- assegnare __primi[0] = 2 __
- fino a che c'è spazio nel vettore, proporre un numero nuovo, diciamo _n_ 
(cominciando dal valore 3 e incrementando di volta in volta il valore nuovo di uno) e inserirlo nella prima posizione libera del vettore, 
che indichiamo con __i__, se __n%v[j] !=0__ per $j=i-1,i-2,...,0$.
*/

#include <iostream>

#define NN 50
using namespace std;

int main(){

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

   cout << endl << "Primi " << nprimi << " numeri interi: " << endl;
   for(int i = 0 ; i < nprimi; i++){
      cout << "\t" << primi[i];
   }
   cout << endl;


   return 0;
}