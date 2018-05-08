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
    void mostrar() const;
    friend void operator<<(std::ostream &, Fraccion); //cout pertenece a la clase ostream es de salida 
    friend void operator>>(std::istream &, Fraccion); // cin pertenece a la clase istream es de entrada

}; // punto y coma obligatorio

Fraccion::Fraccion(int a, int b)
{
    if(b==0){
        exit(-1);
    }
    else    {
        numerador = a;
        denominador = b;
    }
}

Fraccion Fraccion::operator+(Fraccion otra)
{
    Fraccion resultado;
    resultado.numerador = ((this->numerador*otra.denominador) + (this->denominador*otra.numerador));
    resultado.denominador = (this->denominador*otra.denominador);
    return resultado;
}

Fraccion Fraccion:operator-(Fraccion otra)
{
    Fraccion resultado;
    resultado.numerador = ((this->numerador*otra.denominador) - (this->denominador*otra.numerador)); 
    resultado.denominador = (this->denominador*otra.denominador);
    return resultado;
}

Fraccion Fraccion::operator*(Fraccion otra)
{
    Fraccion resultado;
    resultado.numerador = (this->numerador*otra.numerador);
    resultado.denominador = (this->denominador*otra.denominador);
    return resultado;
}

Fraccion Fraccion::operator/(Fraccion otra)
{
   Fraccion resultado;
   resultado.numerador = (this->numerador*otra.denominador);
   resultado3.denominador = (this->denominador*otra.numerador);
   return resultado;
}

void Fraccion Fraccion::mostrar() const
{
    std::cout<<numerador<<"/"<<denominador<<std::endl;
           
}

int main()
{
    Fraccion f1(3,8);
    Fraccion f2(4,5);
    
    Fraccion f3 = f1 + f2;
    f3.mostrar();
}

