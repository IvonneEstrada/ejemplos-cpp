#include <iostream>

class Calentador
{
private:
    int temperatura;
    int incremento;
    
public:
    Calentador();
    void calentar();
    void enfriar();
    void imprimetemperatura();
    int accedeTemperatura() const;
};  //punto y coma obligatorio

Calentador::Calentador()
{
    temperatura = 15;
    imcremento = 3;
}

void Calentador::calentar()
{
    temperatura +=5;
}

void Calentador::enfriar()
{
    temperatura -=5;
}

void Calentador::imprimetemperatura()
{
    std::cout << "La temperatura es " << temperatura << std::endl; 
}

int Calentador::accedeTemperatura() const
{
    return temperatura;
}

int main()
{
    Calentador c1;
    Calentador c2;
    
    c1.calentar();
    c1.imprimetemperatura();
    
    c2.enfriar();
    c2.imprimetemperatura();
}

