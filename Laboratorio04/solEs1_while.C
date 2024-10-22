#include <iostream>


using namespace std;

int main(){

    //T nome[dim]
    //T:tipo di dato
    //nome: scelto da voi
    //dim: numero di componenti del vettore

    
    int vett[10];
    
    int conta =0;

    //vett[0] = 5; //Assegnamento valido
    //vett[10] = 7; //Assegnamento errato fuori range
    //vett = 10; //Assegnamento errato: vett non e`  una variabile!

    while(conta<10){
        cin >> vett[conta];
        conta++; //conta = conta + 1
    }
    
    cout << endl << "Fuori ciclo; conta: " << conta << endl;

    //Stampo valori letti
    cout << endl << " Valori caricati: ";
    for(int i=0; i<10; i++){
        cout << " " << vett[i];
    }
    cout << endl;
    return 0;
}