#include <iostream>

#define SIZE 10;

using namespace std;

/*Dichiarazione funzioni*/

//Questa funzione restituisce la posizione del minimo in un vettore di interi v nel range di indici [ind_min,...,ind_max].
int findMinRange(int v[],int ind_min, int ind_max);

//Scambia gli elementi in posizione p1 e p2 di un array.
//La funzione non restituisce nulla (quindi e` una procedura) e agisce solo per side effect
void swapElementsArray(int v[],int p1, int p2 );


//Codice test
int main(){

   int w[] = {2,3,5,9,1,7,6,4,0,8};
   int w_size = SIZE;
   int w_used = w_size;

   int pMin;

   cout << "Stampo vettore: ";
   for(int i=0; i<w_used; i++){
      cout << endl << w[i];
   }
   cout << endl;

   cout << "Ordino vettore, attendere prego....";
   
   
   for(int i=0; i<w_used-1; i++){
      pMin = findMinRange(w,i,w_used - 1);
      swapElementsArray(w,i,pMin);
   }

   cout << endl << "finito!" << endl;

   cout << "Stampo vettore ordinato: ";
   for(int i=0; i<w_used; i++){
      cout << endl << w[i];
   }
   cout << endl;


   return 0;
}




int findMinRange(int v[],int ind_min, int ind_max){
 
   int posMin = ind_min;
   int min = v[ind_min];

   for(int i=ind_min+1; i <= ind_max; i++){
      if(v[i]<min){//Aggiorno valore e posizione del  minimo;
         min = v[i];
         posMin = i;
      } 
   }
   return posMin;


}


void swapElementsArray(int v[],int p1, int p2 ){
   int temp;
   temp = v[p1];
   v[p1] = v[p2];
   v[p2] = temp;
}