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
    Polinomio operator()(int x);
    
    
};

Polinomio::Polinomio(int a, int b, int c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

Polinomio Polinomio::operator()(int x)
{
    int resultado;
    
}


