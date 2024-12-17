
#ifndef LIBCASO_H
#define LIBCASO_H

#include <cmath> //Per Box-Muller
#include <cstdlib> //Per rand()
#include <ctime> //Per time(NULL)

#define PI_GRECO  3.1415

using namespace std;

double randUniforme(double minimo, double massimo);

double randGaussiano(double media, double stdVar);

void impostaSeme();

#endif