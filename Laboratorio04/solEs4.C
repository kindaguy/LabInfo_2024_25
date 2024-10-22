
#include <iostream>

//Definizione di costanti letterali
#define DIMVETT 10


using namespace std;

int main(){

int vett[DIMVETT];
int vettInv[DIMVETT];

int appo;
int conta=0;

//Acquisisco dati
   cout << endl << "Inserire valore intero (zero per terminare):";
   cin  >> appo;

   while(appo!=0 and conta <DIMVETT){
      vett[conta] = appo;
      conta = conta + 1;

      //Leggo dato successivo
      cout << endl << "Inserire valore intero positivo (zero per terminare):";
      cin  >> appo;
   }

    cout << endl << "Valori inseriti: " << endl;
    for(int i=0; i<conta; i++){
        cout << vett[i] << endl;
    }

   //conta contiene il numero (<=DIMVETT) di valori caricati

   for(int i=0; i < conta; i++){
      vettInv[i] = vett[conta-i-1];
   }

    cout << endl << "Valori invertiti: " << endl;
    for(int i=0; i<conta; i++){
        cout << vettInv[i] << endl;
    }


   return 0;
}