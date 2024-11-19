#include <iostream>
#include <fstream>

using namespace std;

int main(){

   float dati[120];

   int ndati;

   ifstream ifile;

   ifile.open("dati_header.dat");

   if(ifile.fail()){

      return -1;

   }

   ifile >> ndati;

   //Adesso so quanti dati devo caricare!

   for(int i=0; i< ndati; i++){
      ifile >> dati[i];
   }

   ifile.close();

   

   return 0;
}