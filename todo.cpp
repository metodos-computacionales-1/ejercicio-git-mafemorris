#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;

int main(){
    int v1;
    int v2;
    int v3;

    cout << "Ingrese el primer dato" << endl;
    cin >> v1;
    cout << "Ingrese el segundo dato" << endl;
    cin >> v2;
    cout << "Ingrese el tercer dato" << endl;
    cin >> v3;

    if(sqrt(v1*v1 + v2*v2)==v3 || sqrt(v1*v1 + v3*v3)==v2 || sqrt(v3*v3 + v2*v2)==v1){
        cout << "Es triangulo rectangulo" << endl;
    }
    else{
        cout << "No es triangulo rectangulo" << endl;
    }

    return 0;


}