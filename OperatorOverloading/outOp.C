#include <fstream>
#include <iostream>

using namespace std;

struct sfera{
   char col;
   float diam;

};

ostream& operator<<(ostream& out, const sfera& e) {
    out << "Colore: " << e.col << ", Diametro: " << e.diam;
    return out;
}

istream& operator>>(istream& in, sfera& e){
   in >> e.col >> e.diam;
   return in;
}

int main(){

   sfera a,b;
   a.col = 'r';
   a.diam = 1.0;

   ofstream file_out;
   ifstream file_in;

   cout << a << endl;
   
   file_out.open("prova.dat");

   file_out << a << endl;
   file_out.close();

   cout << endl << "Inserire sfera da tastiera";
   cin >> b;
   cout << b << endl;

   file_in.open("sfera.dat");
   file_in >> b;

   file_in.close();
   cout << b << endl;
   
   return 0;
}