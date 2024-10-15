#include <iostream>

using namespace std;

int main(){

   int accu = 0;
   int conta = 0;
   int appo;


   //Acquisisco dati
   cout << endl << "Inserire valore intero positivo (zero per terminare):";
   cin  >> appo;

   while(appo!=0){
      accu = accu+ appo;
      conta = conta + 1;
      cout << endl << "Inserire valore intero positivo (zero per terminare):";
      cin  >> appo;
   }

   if (conta == 0 ){
      cout << endl << "Non sono stati inseriti valori validi!" << endl;
   }
   else{
      cout << endl << "Sono stati inseriti " << conta << " valori." << endl;
      cout << endl << "La media aritmetica e`: " << (float)accu/conta << endl;

   }

   return 0;
}