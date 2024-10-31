#include <iostream>
#include <cmath> //Questa libreria contiene parecchie funzioni di tipo matematica come 
                 //pow(x,y) = x^y
                 //sqrt(x) = radice quadrata di x ovvero pow(x,0.5)
                 //sin(x),cos(x)... funzioni trigonometriche (x in radianti)
                 //fabs(x): valore assoluto di x

#define NN 20

using namespace std;

int main(){


   float vett[NN];
   int ndati;
   float accu=0;
   float media;
   float samplestd;

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
   for(int  i=0; i < ndati; i++) accu+= vett[i]; 
   //Notare la sintassi: se un blocco consta di una sola istruzione posso omettere {...}
   //accu+=j <=> accu = accu+j
   media = accu/ndati;
   //Fine calcolo media


   //Resetto accumulatore, che posso riciclare in quanto segue per il
   
   //Calcolo deviazione standard del campione
   accu =0;

   for(int  i=0; i < ndati; i++) accu+= pow(vett[i]-media,2);

   samplestd = sqrt(accu/ndati);
   //fine calcolo deviazione standard

   cout << endl << "La media del campione vale: " << media;
   cout << endl << "La deviazione standard del campione vale: " << samplestd;
   cout << endl;

   return 0;
}