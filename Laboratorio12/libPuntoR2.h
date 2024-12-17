#ifndef LIBPUNTOR2_H
#define LIBPUNTOR2_H

#include <cmath>
#include <iostream>
#include <fstream>

using namespace std;
//La libreria definisce il tipo di dato 
//puntoR2 e le operazioni di base su questo

struct puntoR2{
   double x;
   double y;
};

//Restituisce la distanza di p dall'origine degli assi
double distOrigin(puntoR2 p);

//Restituisce la distanza tra due punti p1 e p2;
double distPoints(puntoR2 p1, puntoR2 p2);


//Operatori "personalizzati" di stampa di un puntoR2

ostream& operator<<(ostream& out, const puntoR2& e);

//Operatori "personalizzati" di lettura di puntoR2;
istream& operator>>(istream& in, puntoR2& e);



#endif