#include <iostream>

#define NN 10

using namespace std;


//Dichiarazione
//Restituisce un valore letto da tastiera e 
//all'interno di un range specificato
float leggiValido(float,float);
int caricaArrayRange(float [],int, float, float);


int main(){


float valori[NN];
int valori_size = NN;
int valori_used = 0;

//Delego alla funzione caricaArrayRange
//il caricamento di valori validi nell'array valori.
valori_used = caricaArrayRange(valori,valori_size,-5.f,5.f);
//Array valori caricato e valori_used aggiornato 
//al numero di elementi effettivamente registrati

cout << endl << "Numero di valori caricati: " << valori_used << endl;
cout << endl << "Valori: " << endl;

for(int i =0 ; i< valori_used; i++){
   cout << " " << valori[i];
}
cout << endl;



   
   //Almeno un valore e` stato inserito: non controllo divisione per zero

      // cout << endl << "Sono stati inseriti " << conta << " valori." << endl;
      // //Cast esplicito: (tipo)var: var viene localmente considerata di "tipo" tipo  
      // cout << endl << "La media aritmetica e`: " << (float)accu/conta << endl;

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


int caricaArrayRange(float arr[], int size, float min, float max){

char scelta;
float appo;

int arr_size;
int arr_used = 0;

arr_size = size;
//Prima

   //Acquisisco dati
   
   do{
      //Acquisisco dato valido
      appo = leggiValido(-5.f,5.f);
      //Registro dato valido nella prima posizione libera dell'array
      arr[arr_used] = appo;
      
      //Posizione array "consumata": incremento used di uno
      arr_used++; //valori_used = valori_used+1
      
      cout << endl<<"sono stati inseriti" << arr_used << " valori" << endl;
      cout << endl << "Inserire un altro valore? (y per continuare): ";
      cin >> scelta;

   }while(scelta == 'y' and arr_used < arr_size); //Se scelta != 'y'esco dal ciclo
   
   cout << endl <<"fine caricamento valori!" << endl;
   
   //Restituisci il numero di elementi caricati
   return arr_used;
}