#include <iostream>

using namespace std;

int main(){

   int a;
   int b;
   int q=0;
   int r;

   cout << "Inserire dividendo e divisore: ";
   cin >> a >> b;

   if(a>= 0 and b >=0 ){ //Operandi non negativi
      if(b !=0){
         while(a>=b){
            a = a-b;
            q = q+1;

         }
         r=a; //Avremmo potuto usare direttamente a, che contiene il resto per costruzione
         cout << endl << "Fatto!" << endl;
         cout << "Quoziente: " << q << endl;
         cout << "Resto: " << r << endl;


      }
      else{

         cout << endl << "Divisione per zero! Broccolo!" << endl;
      }


   }
   else{

      cout << endl << "Posso operare solo su operandi positivi!!!! Esco." << endl;
   }

   return 0;
}