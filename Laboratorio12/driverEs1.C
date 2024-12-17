#include <iostream>
#include "libCaso.h"

#define SIZEV 10

using namespace std;


int main(){
   double vUnif[SIZEV];
   double vGauss[SIZEV];

   impostaSeme();

   for(int i=0; i<SIZEV; i++){
      vUnif[i] = randUniforme(-1,1);
      vGauss[i] = randGaussiano(4,6);
   }

   cout << endl << "Stampo uniformi: " << endl;
   for(int i=0; i<SIZEV; i++) cout << endl << vUnif[i];
   cout << endl;


   cout << endl << "Stampo Gaussiani: " << endl;
   for(int i=0; i<SIZEV; i++) cout << endl << vGauss[i];
   cout << endl;
   

      
   return 0;

}