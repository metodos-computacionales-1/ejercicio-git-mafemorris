#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;

int main(){
    double radio;
    cout << "Ingrese el radio" << endl;
    cin >> radio;
    double diametro = 2*radio;
    double perimetro = 2* M_PI * radio;
    double area = 2*M_PI*radio * pow(radio,2)  ;

    cout << "Para el radio es "<< radio<<" el diametro es " << diametro << ", el perimetro es "<< perimetro << " y el area " << area << endl;
    return 0;
}