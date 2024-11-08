#include <iostream>

#define SIZE 10;

using namespace std;

/*Dichiarazione funzioni*/

//Questa funzione restituisce la posizione del massimo in un vettore di interi v contenente used elementi.
int findMax(int v[],int used);

//Questa funzione restituisce la posizione del massimo in un vettore di interi v nel range di indici [ind_min,...,ind_max].
int findMaxRange(int v[],int ind_min, int ind_max);


//Questa funzione restituisce la posizione del minimo in un vettore di interi v contenente used elementi.
int findMin(int v[],int used);

//Questa funzione restituisce la posizione del minimo in un vettore di interi v nel range di indici [ind_min,...,ind_max].
int findMinRange(int v[],int ind_min, int ind_max);

//Codice test
int main(){

   int v[] = {0,1,2,3,4,5,6,7,8,9};
   int v_size = SIZE;
   int v_used = v_size;

   int w[] = {2,3,5,9,1,7,6,4,0,8};
   int w_size = SIZE;
   int w_used = w_size;

   int pMax,pMin;
   int pMaxRange,pMinRange;

   pMax = findMax(v,v_used);
   pMin = findMin(v,v_used);
   cout << endl << "Massimo elemento di v: " << v[pMax] << " in posizione: " << pMax;
   cout << endl << "Minimo elemento di v: " << v[pMin] << " in posizione: " << pMin;

   pMaxRange = findMaxRange(v,0,5);
   pMin = findMinRange(v,0, 5);
   cout << endl << "Massimo elemento di v[0,...5]: " << v[pMaxRange] << " in posizione: " << pMaxRange;
   cout << endl << "Minimo elemento di v[0,..,5]: " << v[pMinRange] << " in posizione: " << pMinRange;

   pMax = findMax(w,w_used);
   pMin = findMin(w,w_used);
   cout << endl << "Massimo elemento di w: " << w[pMax] << " in posizione: " << pMax;
   cout << endl << "Minimo elemento di w: " << w[pMin] << " in posizione: " << pMin;
   cout << endl;

   pMaxRange = findMaxRange(w,0,5);
   pMin = findMinRange(w,0, 5);
   cout << endl << "Massimo elemento di w[0,...5]: " << w[pMaxRange] << " in posizione: " << pMaxRange;
   cout << endl << "Minimo elemento di w[0,..,5]: " << w[pMinRange] << " in posizione: " << pMinRange;
   cout << endl;
   
   

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


int findMin(int v[],int used){
   int posMin = 0;
   int min = v[0];

   for(int i=1; i<used; i++){
      if(v[i]<min){//Aggiorno valore e posizione del  minimo;
         min = v[i];
         posMin = i;
      } 
   }
   return posMin;
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
