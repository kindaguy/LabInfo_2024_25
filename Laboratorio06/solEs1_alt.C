#include <iostream>

using namespace std;

int findElArray(int v[], int used, int val);


int main(){


   int dati[] = {0,1,2,3,4,5,6,7,8,9};
   int dati_size = 10;
   int dati_used = 10;

   int valore;

   int posizione;

   cout << endl << "Valore da cercare: ";
   cin >> valore;
   
   posizione = findElArray(dati, dati_used,valore);
   
   if(posizione == -1){
      cout << endl << "Elemento non trovato!" << endl;
   }
   else{
      cout << endl << "Elemento trovato in posizione: "<< posizione << endl;
   }





   return 0;
}

int findElArray(int v[], int used, int val){

   int pos = 0;
   int result=-1;
   
   while(pos<used){
      if(v[pos]==val) {
         //Se trovo elemento cercato restituisco pos (ed esco dalla funzione)
         return pos;
      }
      else{
         //Passo ad ispezionare l'elemento successivo
         pos++;
      }
   }

   //Se arrivo qui, vuol dire che l'elemento val non e` presente nell'array
   return -1;
}