#include <iostream>

using namespace std;

int main(){

   int a  = 4;
   int b = 7;

   int *p_int1;
   int *p_int2;

   cout << endl << "Valore in a: " << a;
   cout << endl << "Indirizzo di a: " << &a;

   p_int1 = &a;

   cout << endl << "Contenuto di p_int1: " << p_int1;

   cout << endl;
   
   p_int2 = &b;
   cout << endl << "Contenuto di p_int2: " << p_int2;
   cout << endl << "Indirizzo di b: " << &b;
   cout << endl;

   *p_int1 = b;

   cout << endl <<"Valore in a: " << a << endl;
   



   return 0;
}