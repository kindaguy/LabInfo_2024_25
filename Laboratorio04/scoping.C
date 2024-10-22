#include <iostream>


using namespace std;

int main(){

    
    int pippo = 20; //questa pippo e` locale al blocco del main
    
    
    {//Un blocco definisce uno scope (contesto): 
        //Variabili dichiarate all'interno di un blocco hanno 
        //un ciclo di vita limitato al blocco stesso.
        //Smettono di esistere quando l'esecuzione esce dal blocco  
        
        int pippo=10;  //Questa variabile pippo e`  locale al blocco
        
        cout << endl << "Pippo dentro blocco: " << pippo << endl;
    }

    cout << "Pippo fuori blocco: " << pippo << endl;

    //cout << endl << "Fuori ciclo; conta: " << conta << endl;

    //for(int contatore = 0; condizione su contatore; contatore =  contatore + 1)
    return 0;
}