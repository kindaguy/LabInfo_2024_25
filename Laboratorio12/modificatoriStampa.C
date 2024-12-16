#include <iostream>
#include <fstream>
//Questa libreria contiene modificatori di stampa,
//che consentono una formattazione, piu` o meno fine,
//delle stampe

using namespace std;

int main(){

   float a = 1.234f;
   float b = 5.678f;
   float c = 1.f;
   float d =  2.f;

   //Stampa senza modificatori
   cout << endl << "Stampa standard: " << endl;
   cout << endl;
   cout << a << " " << b << endl;
   cout << c << " " << d << endl;

   //Stampo ogni valore su un campo di 10 caratteri, allineando a dx
   //Stampa con modificatori   
   cout << endl << "Stampa allineata (a sx): " << endl;
   cout << setw(10) << a << setw(10) << b << endl;
   cout << setw(10) << c << setw(10) << d << endl;

   //Notate che il "modificatore" va messo prima di tutti i "pezzi"
   //che si vogliono allineare.

   return 0;

}