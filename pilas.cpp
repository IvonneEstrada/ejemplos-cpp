#include <iostream>

template <typename Tipo>
class Pila
{
    private:
        int tope;
        Tipo *arreglo;
        int max;
    public:
        Pila(int tam);  //constructor
        ~Pila();    //destructor
        void push(Tipo dato);
        Tipo pop();
};

template <typename Tipo>
Pila<Tipo>::Pila(int tam){
    tope = 0;
    max = tam;
    arreglo = new Tipo[max];
}

template <typename Tipo> 
Pila<Tipo>::~Pila()
{
    delete [ ] arreglo;
}

template <typename Tipo>
void Pila<tipo>::push(Tipo dato);
{
    
}

template <typename Tipo>
Tipo Pila<Tipo>::pop()
{
    
}

int main()
{
    Pila<int> miPila{5};
    
    miPila.push(3);
    miPila.push(7);
    int x = miPila.pop();
    std::cout << x << "\n";
    x = miPila.pop();
    
}