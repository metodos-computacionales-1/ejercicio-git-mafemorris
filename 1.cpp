#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;

int main(){
    float radio;
    cout << "Ingrese el radio" << endl;
    cin >> radio;
    float diametro = 2*radio;
    float perimetro = 2* M_PI * radio;
    float area = 2*M_PI*radio * pow(radio,2)  ;

    cout << "Para el radio es "<< radio<<" el diametro es " << diametro << ", el perimetro es "<< perimetro << " y el area " << area << endl;
    return 0;
}