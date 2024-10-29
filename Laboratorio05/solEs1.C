#include <iostream>

using namespace std;

//Dichiarazione
float leggiValido(float,float);


int main(){

   float minimo, massimo;
   float a,b;

   float valore;


   //Leggo estremi intervallo e definisco intervallo
   //ben formato.

   cout << endl <<"inserire estremi intervallo: ";
   cin >> a >> b;
   if(a<=b){
      minimo = a;
      massimo = b;
   }
   else{
      minimo = b;
      massimo = a;
   }
   //Arrivati qui [minimo,massimo] e` un intervallo ben formato.

   //Chiamo funzione per leggere valore valido.
   valore = leggiValido(minimo,massimo);

   cout << endl << "Valore valido: " << valore << endl;

   return 0;
}



//Definizione
float leggiValido(float min,float max){
   
   float val;
   
   //Leggo valore
   do{
      cout << " Inserire valore nel range [" << min << "," << max <<"]" << endl;
      cin >> val;
   }while(val > max or val < min);

   return val;
   
}

