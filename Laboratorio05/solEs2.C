#include <iostream>

#define NN 10

using namespace std;


//Dichiarazione
//Restituisce un valore letto da tastiera e 
//all'interno di un range specificato
float leggiValido(float,float);


int main(){


float valori[NN];
int valori_size = NN;
int valori_used = 0;


char scelta;
float appo;

//Prima

   //Acquisisco dati
   
   do{
      //Acquisisco dato valido
      appo = leggiValido(-5.f,5.f);
      //Registro dato valido nella prima posizione libera dell'array
      valori[valori_used] = appo;
      
      //Posizione array "consumata": incremento used di uno
      valori_used++; //valori_used = valori_used+1
      
      cout << endl<<"sono stati inseriti" << valori_used << " valori" << endl;
      cout << endl << "Inserire un altro valore? (y per continuare): ";
      cin >> scelta;

   }while(scelta == 'y' and valori_used < valori_size); //Se scelta != 'y'esco dal ciclo
   
   cout << endl <<"fine caricamento valori!" << endl;
   
   cout << endl << "Numero di valori caricati: " << valori_used << endl;
   cout << endl << "Valori: " << endl;

for(int i =0 ; i< valori_used; i++){
   cout << " " << valori[i];
}
cout << endl;
   return 0;
}

//Definizione
float leggiValido(float min,float max){
   
   float val;
   
   //Leggo valore
   do{
      cout << " Inserire valore nel range [" << min << "," << max <<"]" << endl;
      cin >> val;
   }while(val > max or val < min);

   return val;
   
}

