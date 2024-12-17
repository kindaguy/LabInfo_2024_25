#include <iostream>
#include <fstream>
#include "libCaso.h"
#include "libPuntoR2.h"
#include "libStatistica.h"

using namespace std;

//Verifica se un punto p cade nel cerchio di raggio r e centro centro
bool isInsideCircle(puntoR2 p, double r, puntoR2 centro);

//Estrae n punti a caso nel quadrato con spigolo inferiore sinistro nell'origine
//e di lato r e restitisce quanti cadono all'interno di una circonferenza con 
//centro nell'origine e raggio r. 
int countWithin(int n, double r);

//Qui calcolo il valore rilevato
double rilev(int n, double r);

int main(){

   //TEST
   //double ril;
   int npoints;
   int nril;
   double *vril;


   do{
      cout << endl <<"Quanti punti usare in ogni rilevazione? ";
      cin >> npoints;
   }while(npoints<=0);

   do{
      cout << endl <<"Quante rilevazioni per misura? ";
      cin >> nril;
   }while(nril<=0);
   

   cout << endl << "Effettuero` misura con N = " << npoints << " punti per M = " << nril << " rilvevazioni" << endl;
   
   //Genero numeri diversi ad ogni esecuzione del programma
   impostaSeme();

   vril = new double[nril];
   if(vril==NULL){
      cout << endl << "Problema allocazione vettore rilevazioni. Esco!" << endl;
      return -1;
   }

   //TEST
   // ril = rilev(100,1);
   // cout << endl << "Rilevazione = " <<  ril << endl; 

   for(int i=0; i<nril; i++)
      vril[i] = rilev(npoints,1);


   cout << endl << "Misura: " <<  media(vril,nril) << endl;
   return 0;  
}


bool isInsideCircle(puntoR2 p, double r, puntoR2 centro){

   if(pow(p.x-centro.x,2) + pow(p.y - centro.y,2) < pow(r,2))
      return true;
   else
      return false;
}


int countWithin(int n, double r){

   int conta = 0;
   puntoR2 punto;
   puntoR2 centro;
   centro.x = 0;
   centro.y = 0;

   for(int i=0; i<n; i++){
      punto.x = randUniforme(0,r);
      punto.y = randUniforme(0,r);
      if(isInsideCircle(punto, r, centro)) conta++;   
   }
   return conta;

}


double rilev(int n, double r){

   return 4 * (double) countWithin(n,r)/n;

}
