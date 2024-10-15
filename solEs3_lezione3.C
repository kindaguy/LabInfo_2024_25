#include <iostream>

using namespace std;

int main(){

    //Dichiarazione variabili
    int conta = 0;
    int accu = 0;

    int appo;
    char scelta;

    //Ciclo post-condizionale
    //Il corpo viene eseguito almeno una volta

    do{ //Ciclo di acquisizione dati
    
        cout << " Inserire valore intero: ";
        cin >> appo;
        accu = accu + appo;
        conta = conta +1;

        cout << endl << " Inserire altri dati? (y per si): ";
        cin >> scelta;
        //Se scelta == 'y' allora chiedi altro dato,
        
    } while(scelta == 'y');

    //Altrimenti esci dal ciclo

    //Processo dati e stampo risultato

    cout << "Numero di valori inseriti:  " << conta << endl;
    cout << "Media aritmetica: " << (float)accu/conta << endl;
    //Cast esplicito (tipo)var:
    //fa in modo che var venga localmente interpretata come di tipo "tipo"

   


    return 0;
}