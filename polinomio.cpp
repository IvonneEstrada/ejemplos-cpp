#include <iostream>
#include <cmath>

class Polinomio
{
private: 
    int a;
    int b;
    int c;
    
public:
    Polinomio(int a, int b, int c);
    int operator()(int x);
    float operator~();
    
friend void operator<<(std::ostream &salida, Polinomio p);
friend void operator>>(std::istream &entrada, Polinomio &p);
    
};

Polinomio::Polinomio(int a, int b, int c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

int Polinomio::operator()(int x)
{
    int resultado;
    
}


