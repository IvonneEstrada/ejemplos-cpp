#include <iostream>

class Fraccion
{
private:
    int numerador;
    int denominador;
        
public: 
    Fraccion(int numerador, int denominador);
    Fraccion operator+(Fraccion otra); //sobrecarga de metodo miembro
    Fraccion operator-(Fraccion otra);
    Fraccion operator*(Fraccion otra);
    Fraccion operator/(Fraccion otra);

}; 

Fraccion::Fraccion(int numerador, int denominador)
{
    
}

Fraccion Fraccion::operator+(Fraccion otra)
{
    Fraccion resultado;
    this->numerador+otra.denominador;
    
    
}