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
    friend void operator<<(std::ostream &, Fraccion); //cout pertenece a la clase ostream es de salida 
    friend void operator>>(std::istream &, Fraccion); // cin pertenece a la clase istream es de entrada

}; 

Fraccion::Fraccion(int numerador, int denominador)
{
    
}

Fraccion Fraccion::operator+(Fraccion otra)
{
    Fraccion resultado;
    this->numerador+otra.denominador;
    
    
}


}