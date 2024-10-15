#include <iostream>

using namespace std;

int main(){

    int a,b, massimo, minimo;
    int val;

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

    cout << endl << " Intervallo definito: [" << minimo << "," << massimo <<"]" << endl;

    //Leggo valore
    do{
        cout << " Inserire valore nel range [" << minimo << "," << massimo <<"]" << endl;
        cin >> val;
    }while(val > massimo or val < minimo);
    //while(val >=minimo and val <=massimo);

    return 0;
}