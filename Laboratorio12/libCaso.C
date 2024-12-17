#include "libCaso.h"

double randUniforme(double minimo, double massimo){

   return ((double) rand()/RAND_MAX)*(massimo-minimo)+minimo;
}

double randGaussiano(double media, double stdVar){

   double n,u1,u2;
   u1 = randUniforme(0,1);
   u2 = randUniforme(0,1);
   n = sqrt(-2*log(u1))* cos(2*PI_GRECO*u2);
   //Qui ho un valore estratto da una popolazione Gaussiana N(0,1)
   //Riscalo e traslo per avere N(media, sdtVar)
   return n*stdVar+media;

}

void impostaSeme(){
   srand(time(NULL));
}
