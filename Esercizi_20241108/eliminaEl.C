#include <iostream>

using namespace std;

//Elimina elemento in posizione pos sostitendolo con l'ultimo elemento dell'array
//Restituisce used decrementato di uno se elimina
//Restituisce -1 se pos è fuori range
int eliminaSwap(int v[], int used, int pos);


//Elimina elemento in posizione pos shiftando tutti gli elementi a dx
//di pos a sx di una posizione

//Restituisce used decrementato di uno se elimina
//Restituisce -1 se pos è fuori range

int eliminaShift(int v[], int used, int pos);


int main(){
   int v[] = {0,1,2,3,4,5,6,7,8,9};
   int v_used = 10;

   //Provate a usare le funzioni qui per eliminare gli elementi 2,4,6 e stampate, ogni volta, i valori rimanenti.
   //Usate la funzione eliminaSwap

   //Ripristino il vettore
   for(int i=0; i<10; i++) v[i] = i;

   //Provate a usare le funzioni qui per eliminare gli elementi 2,4,6 e stampate, ogni volta, i valori rimanenti.
   //Usate la funzione eliminaShift 

   return 0;
}

int eliminaSwap(int v[], int used, int pos){
   if(pos<0 or pos >=used){//Errore: posizione fuori range
      return -1;
   }
   else if(used == 1){
      //Vettore di un elemeto. Non fare nulla e restituisci 0
      return 0;
   }
   else{//Fai sostituzione e restituisci nuovo valore di used
      v[pos]= v[used-1];
      return used-1;
   }

}

int eliminaShift(int v[], int used, int pos){
   if(pos<0 or pos >=used){//Errore: posizione fuori range
      return -1;
   }
   else if(used == 1){
      //Vettore di un elemeto. Non fare nulla e restituisci 0
      return 0;
   }
   else{
      for( int i = pos; i<used-1; i++ ){
         v[i] = v[i+1];
      }

      return used-1;
   }

}
