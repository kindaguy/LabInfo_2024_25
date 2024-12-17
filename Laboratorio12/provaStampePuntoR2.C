#include "libPuntoR2.h"
#include <iostream>
#include <fstream>


using namespace std;


int main(){
   ofstream fileout;

   puntoR2  punto;
   //cin >> punto.x >> punto.y;
   cin >> punto;
   cout << punto;

   fileout.open("provaStampaR2.dat");
   fileout << punto << endl;
   fileout.close();
   
   return 0;
}
