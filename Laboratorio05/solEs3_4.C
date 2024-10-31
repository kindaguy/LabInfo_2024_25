/*
Parto dalla soluzione dell'esercizio 6 del Laboratorio 4.
Prima, sostituirò alcune porzioni del codice, che troverete commentate con delle funzioni
Poi verifichero` la funzione isOutlier su alucni dati letti da tastiera.
*/

#include <iostream>
#include <cmath> //Questa libreria contiene parecchie funzioni di tipo matematica come 
                 //pow(x,y) = x^y
                 //sqrt(x) = radice quadrata di x ovvero pow(x,0.5)
                 //sin(x),cos(x)... funzioni trigonometriche (x in radianti)
                 //fabs(x): valore assoluto di x

#define NN 20

using namespace std;

//Dichiarazione delle funzioni
float media(float [],int);
float devstd(float [], int);
bool isOutlier(float,float,float);

int main(){


   float vett[NN];
   int ndati;
   float accu=0;
   float av;
   float samplestd;
   float dato;
   char scelta;

   do{
      cout << endl <<  "Quanti dati vuoi inserire (tra 1 e 20)? ";
      cin >> ndati;
   }while(ndati <1 or ndati >20);
   //A questo punto so quanti dati devo chiedere e che il numero dei dati e` nel range specificato.

   for(int i=0; i< ndati; i++){
      cout << endl << "Inserire dato " << i+1 << " :";
      cin >> vett[i];
   }
   cout << endl << "Dati caricati!" << endl;

   //I dati sono stati inseriti
   
   //Calcolo media
   //for(int  i=0; i < ndati; i++) accu+= vett[i]; 
   //Notare la sintassi: se un blocco consta di una sola istruzione posso omettere {...}
   //accu+=j <=> accu = accu+j
   //media = accu/ndati;
   av = media(vett,ndati);
   //Fine calcolo media

   

   //Resetto accumulatore, che posso riciclare in quanto segue per il
   
   //Calcolo deviazione standard del campione
   // accu =0;

   // for(int  i=0; i < ndati; i++) accu+= pow(vett[i]-media,2);

   // samplestd = sqrt(accu/ndati);
   samplestd = devstd(vett,ndati);
   //fine calcolo deviazione standard

   cout << endl << "La media del campione vale: " << av;
   cout << endl << "La deviazione standard del campione vale: " << samplestd;
   cout << endl;

   cout << endl << "Intervallo di confidenza 3sigma: (" <<  av-3*samplestd << "," << av+3*samplestd << ")"<< endl;

   do{
      cout << endl << "Inserire valore da controllare:";
      cin >> dato;
      if(isOutlier(dato, av, samplestd))
         cout << "Dato anomalo" << endl;
      else  
         cout << "Dato buono" << endl;

      cout << "Inserire altro dato (y per proseguire):";
      cin >> scelta;
   }while(scelta == 'y');


   return 0;
}


//Definizione delle funzioni
float media(float v[], int ndati){
   float accu = 0;

   for(int i=0; i<ndati; i++) accu+=v[i];

   return accu/ndati;
}

float devstd(float v[], int ndati){
   float accu = 0;

   float m;

   m = media(v,ndati);

   for(int i=0; i<ndati; i++) accu+=pow(v[i]-m,2);

   return sqrt(accu/ndati);
}

bool isOutlier(float val, float media, float standardDev){

   if(val > media - 3*standardDev and val < media + 3*standardDev) return false;
   else return true;
}