#include <iostream>

using namespace std;

int main(){

    int a,b, massimo, minimo;

    cout << endl << " Inserire due valori interi: ";
    cin >> a >> b;

    if(a>b){
        massimo = a;
        minimo = b;
    }
    else{
        massimo = b;
        minimo = a;
    }

    cout << endl << " Intervallo definito: (" << minimo << "," << massimo <<")" << endl;


    if(massimo <= 0){
        cout << endl << " Intervallo negativo" << endl;
    }
    else{

        if(minimo >= 0){
            cout << endl << " Intervallo positivo" << endl;
        }
        else{
            cout << endl << " Include lo zero" << endl;
        }
    }


    return 0;
}