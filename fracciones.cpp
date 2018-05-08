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
    void mostrar();
    friend void operator <<(std::ostream &salida, Fraccion f);
    friend void operator >>(std::istream &entrada, Fraccion &f);

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

void operator <<(std::ostream &salida, Fraccion f)
{
    salida<<f.numerador<<"\n--"<<"\n"<<f.denominador<<"\n";
}

void operator >>(std::istream &entrada, Fraccion &f)
{
    std::cout<<"numerador:";
    entrada>>f.numerador;
    std::cout<<"denominador:";
    entrada>>f.denominador;
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
   resultado.denominador = (this->denominador*otra.numerador);
   return resultado;
}

void Fraccion::mostrar()
{
    std::cout<<this->numerador<<std::endl;
    std::cout<<"--"<<std::endl;
    std::cout<<this->denominador<<std::endl;
    std::cout<<std::endl;
           
}

int main()
{
    Fraccion f1{1,1};
    std::cin>>f1;
    std::cout<<f1;
    Fraccion f2{1,1};
    std::cin>>f1;
    std::cout<<f1;
    Fraccion f3{1,1};
    f3=f1+f2;
    std::cout<<f3;
    f3=f1-f2;
    std::cout<<f3;
    f3=f1*f2;
    std::cout<<f3;
    f3=f1/f2;
    std::cout<<f3;
    return 0;
}

