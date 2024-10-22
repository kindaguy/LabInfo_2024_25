#include <iostream>

using namespace std;

int main(){

   int accu = 0;
   int conta = 0;
   int appo;

   char scelta;
   int val;
   int quanti;




    //Fase 1:
    //Chiedere numero di voti nvoti >=0 e <=30
    do{
            cout << " Inserire numero voti [" << 1 << "," << 30 <<"]" << endl;
            cin >> quanti;
        }while(quanti > 30 or quanti < 1);

    //Se arrivo qui il numero di voti e` compatibile con 
    //la richiesta
    cout << endl << "Dovrai inserire " << quanti << " voti..." << endl;


    //Acquisisco dati
    while(conta <quanti){
        //Leggo dato valido
        do{
            cout << " Inserire valore nel range [" << 18 << "," << 30 <<"]" << endl;
            cin >> val;
        }while(val > 30 or val < 18);
        
        //Processo dato
        accu = accu + val;
        
        //Incremento contatore
        conta = conta + 1;

    }
    //Alla fine del ciclo conta == quanti.


   
    //Almeno un valore e` stato inserito: non controllo divisione per zero

    cout << endl << "Sono stati inseriti " << quanti << " valori." << endl;
    //Cast esplicito: (tipo)var: var viene localmente considerata di "tipo" tipo  
    cout << endl << "La media aritmetica e`: " << (float)accu/quanti << endl;

   return 0;
}