
#include <iostream>

using namespace std;

int main(){

int vett[10];

int appo;
int conta=0;

//Acquisisco dati
   cout << endl << "Inserire valore intero (zero per terminare):";
   cin  >> appo;

   while(appo!=0 and conta <10){
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