
#include <iostream>

//Definizione di costanti letterali
#define DIMVETT 10


using namespace std;

int main(){

int vett[DIMVETT];
int vettInv[DIMVETT];

int appo;
int conta=0;
bool cond = true;
int quanti =0;

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


   cond = true;
   quanti = 0;

   while(cond and quanti < conta){
      //confronta la componente successiva dei due vettori
      if(vett[quanti] != vettInv[quanti]) {//se sono diverse, registra anomalia
      
         cond = false;
      }
      //altimenti non fare nulla
      
      quanti++; //e comunque passa alla componente successiva 

   }

   //Esco dal ciclo: in quale condizione???
   //Se in uscita dal ciclo cond e`  true allora la sequenza e`  palindroma
   if(cond){
      cout <<endl <<" la sequenza e` palindroma" << endl;
   }
   else{
      cout <<endl <<" la sequenza NON e` palindroma" << endl;

   }

   
   return 0;
}