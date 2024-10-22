#include <iostream>

using namespace std;

int main(){

   int accu = 0;
   int conta = 0;
   int appo;

   char scelta;
   int val;

   //Acquisisco dati
   
   do{
      
      
      //Leggo valore
        do{
            cout << " Inserire valore nel range [" << 18 << "," << 30 <<"]" << endl;
            cin >> val;
        }while(val > 30 or val < 18);

      //Se arrivo qui allora il dato inserito e`  valido
      
      accu = accu + val;
      conta = conta + 1;
      
      cout << endl << "Inserire un altro valore? (y per continuare): ";
      cin >> scelta;
   }while(scelta == 'y'); //Se scelta != 'y'esco dal ciclo
   
   //Almeno un valore e` stato inserito: non controllo divisione per zero

      cout << endl << "Sono stati inseriti " << conta << " valori." << endl;
      //Cast esplicito: (tipo)var: var viene localmente considerata di "tipo" tipo  
      cout << endl << "La media aritmetica e`: " << (float)accu/conta << endl;

   return 0;
}