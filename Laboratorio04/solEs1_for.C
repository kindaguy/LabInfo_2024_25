#include <iostream>


using namespace std;

int main(){

    //T nome[dim]
    //T:tipo di dato
    //nome: scelto da voi
    //dim: numero di componenti del vettore

   
    int vett[10];
    
    for(int conta = 0; conta < 10; conta = conta + 1){
        //Il contatore conta e`  locale al for;
        //fuori dal for smette di esistere
        cout << endl << "Inserire valore: ";
        cin >> vett[conta];
        cout << endl << "sono nel ciclo; conta vale: " << conta <<endl;
        //conta=conta+1 eseguito qui.
    }
    
    //Stampo valori letti
    cout << endl << " Valori caricati: ";
    for(int i=0; i<10; i++){
        cout << " " << vett[i];
    }
    cout << endl;

    
    return 0;
}