#include <iostream>
#include <fstream>

using namespace std;

struct myArrayInt{
   int size; 
   int used;
   int *raw;
};


int main(){

   myArrayInt a1;
   int conta =0;
   ifstream fin;
   int appo;
   
   a1.size  = 0;
   a1.used = 0;
   a1.raw = NULL;

   fin.open("interi.dat");

   //Conto i dati
   fin >> appo;
   while(!fin.eof()){
      conta++;
      fin >> appo;
   }

   cout << endl <<"Dati su file: " << conta << endl;

   a1.raw = new int[conta];
   a1.size = conta;
   a1.used = 0;

   fin.clear();
   fin.seekg(0,ios::beg);

   //Caricamento dati nel vettore

   for(int i=0; i<conta; i++){
      fin >> a1.raw[i];
      a1.used++;
   }
   //a1.used = conta;
   return 0;
}