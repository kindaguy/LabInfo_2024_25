#include <iostream>
#include <cmath>

#define NN 10

using namespace std;


/******DICHIARAZIONI delle Funzioni */
//Dichiarare la funzione
//ovvero dichiararne la signature f: Dom -> Cod
float somma_float(float,float);




int main(){

   float a,b;

   float somma;

   cout << endl << "Inserire 2 valori float: ";
   cin >> a >> b;
   //Somma i due valori e assegna il risultato a somma;
   somma = somma_float(a,b);

   cout << endl << "somma: " << somma << endl;
   return 0;
}


/** DEFINIZIONI delle Funzioni***/

//Definire la funzione
//ovvero dire come la funzione agisce sugli elementi del dominio
//per produrre l'elemento del codominio.
float somma_float(float val1,float val2 ){
   //val1 e val2 sono parametri formali della funzione
   //ovvero variabili locali della funzione inizializzate
   //al momento della chiamata della funzione con i
   //valori degli omologhi parametri attuali.
   
   float appo; //Variabile locale della funzione
   cout << endl << "Valore val1: " << val1 << endl;
   cout << endl << "Valore val2: " << val2 << endl;
   appo = val1 + val2;
   return appo;


}