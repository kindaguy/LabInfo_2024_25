#include "libPuntoR2.h"

double distOrigin(puntoR2 p){
   return sqrt(pow(p.x,2)+pow(p.y,2));
}

double distPoints(puntoR2 p1, puntoR2 p2){

   return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
}


ostream& operator<<(ostream& out, const puntoR2& e) {
    out << "x: " << e.x << ", y: " << e.y;
    return out;
}

//Operatori "personalizzati" di lettura di puntoR2;
istream& operator>>(istream& in, puntoR2& e){
   in >> e.x >> e.y;
   return in;
}


