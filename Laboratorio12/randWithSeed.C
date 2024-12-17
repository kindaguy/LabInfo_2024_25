/*Un primo programma che usa rand() */

#include <iostream>
#include <fstream>
#include <cmath>
//Questa e` la libreria che include int rand()
#include <cstdlib>
#include <ctime>

#define SIZEV 10
using namespace std;

int main(){

   int v[SIZEV];
   int size = SIZEV;

   double vd[SIZEV];

   //Questa inizializza il "seme" del generatore di numeri casuali 
   //usando il tempo macchina (in secondi) corrente.
   srand(time(NULL));

   cout << endl << "RAND_MAX = " << RAND_MAX << endl;
   cout << endl << "Max Integer (32 bit/4 byte): " << (int) (pow(2,31)-1) << endl;

   for(int i=0; i< SIZEV; i++){
      v[i] = rand();
      cout << endl << v[i];
   }

   cout << endl << endl << "Numeri in [0,1]"<< endl;
   for(int i=0; i< SIZEV; i++){
      vd[i] = (double) rand()/RAND_MAX;
      cout << endl << vd[i];
   }


   cout << endl;

   return 0;
}