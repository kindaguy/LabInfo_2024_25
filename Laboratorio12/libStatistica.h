#include <cmath>

template <typename T>
double media(T data[], int ndata);

template <typename T>
double stdDeviation(T data[], int ndata);

template <typename T>
double media(T data[], int ndata){

   T accu  = 0;
   for(int i=0; i<ndata; i++)
      accu += data[i];
   
   return (double) accu/ndata;
}

template <typename T>
double stdDeviation(T data[], int ndata){
   T accu2;
   for(int i=0; i<ndata; i++){
      accu2+=data[i];
   }
   return sqrt((double) accu2/ndata - pow(media(data,ndata),2));

}
