
#include <iostream>

//Definizione di costanti letterali
#define DIMVETT 50


using namespace std;

int main(){

int vett[DIMVETT];

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


   return 0;
}