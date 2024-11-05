#include <iostream>
//Scambia scambia il contenuto di v1 e v2
void scambia(int v1, int v2);
void scambia(int v[], int n, int i, int j);


using namespace std;

int main(){

   int a = 5;
   int b = 7;

   int v[] = {1,2,3};
   int v_used = 3;
   int v_size = 3;

   cout << "Sono nel main: ";
   cout << endl << "a: " << a;
   cout << endl << "b: " << b;
   cout << endl;

   scambia(a,b);

   cout << "Sono nel main, dopo scambio: ";
   cout << endl << "a: " << a;
   cout << endl << "b: " << b;
   cout << endl;


   //Scambio elementi vettore
   cout << endl << "Stampo vettore originale:";
   for(int i=0; i<v_used; i++){
      cout << v[i] << " "; 
   } 
   cout << endl;

   scambia(v,v_used,0,1);


   cout << endl << "Stampo vettore modificato (forse):";
   for(int i=0; i<v_used; i++){
      cout << v[i] << " "; 
   } 
   cout << endl;


   return 0;
}

void scambia(int v1, int v2){

   int appo;

   cout << endl << "Sono in scambia. ";
   cout << endl << "Prima di scambio: ";
   cout << endl << "v1: " << v1;
   cout << endl << "v2: " << v2;
   cout << endl;

   
   //Scambio
   appo = v1;
   v1 = v2;
   v2 = appo;

   cout << endl << "Dopo scambio: ";
   cout << endl << "v1: " << v1;
   cout << endl << "v2: " << v2;
   cout << endl;


   
   return;
}


void scambia(int v[], int n, int i, int j){

   int appo;
   //Non faccio controllo sugli indici per ragioni di
   //tempo...


   //Scambio
   appo = v[i];
   v[i] = v[j];
   v[j] = appo;

   return;

}