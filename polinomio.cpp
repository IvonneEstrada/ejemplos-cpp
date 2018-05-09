#include <iostream>
#include <cmath>

class Polinomio {
    private:
        int a ;
        int b ;
        int c ;
        
    public:
        Polinomio( int a = 0, int b = 0, int c = 0 );
        int operator()( int x );
        float operator~();
        
    friend void operator<<( std::ostream &salida, Polinomio p );
    friend void operator>>( std::istream &entrada, Polinomio &p );
};

Polinomio::Polinomio( int a, int b, int c )    {
    this->a = a ;
    this->b = b ;
    this->c = c ;
}

int Polinomio::operator()( int x )   {
    int resultado = 0 ;
    
    resultado = (this->a * ( x * x )) + (this->b * x) + (this->c) ;
    
    return (resultado);
}

void operator<<( std::ostream &salida, Polinomio p ) {
    salida << p.a << "x² + " << p.b << "x + " << p.c << std::endl ;
}

void operator>>( std::istream &entrada, Polinomio &p )  {
    entrada >> p.a ;
    entrada >> p.b ;
    entrada >> p.c ;
}

float Polinomio::operator~()    {
    float raiz ;
    raiz = ( (-this->b ) + std::sqrt( (this->b * this->b) - (4 * this->a * this->c))) / 2 * ( this->a) ;
    return( raiz );
}

int main()
{
    Polinomio p1 ;
    
    std::cin >> p1 ;
    std::cout << "El polinomio: " << p1 ;
    std::cout << "La raiz de p: " << ~p1 << std::endl ; //p.operator~();
    std::cout << "Evaluado en 2: " << p1( 2 ) ;
}