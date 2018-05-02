#include <iostream>

class Calentador
{
private:
    int temperatura;
    int incremento;
    int min;
    int max;
    
public:
    Calentador(int min, int max, int temperatura);
    void operator++();
    void operator--();
    void imprimetemperatura() const;
    int accedeTemperatura() const;
    void imprimeFarenheit() const;
    bool operator==(Calentador otro); //sobrecarga de metodo miembro
    
};  //punto y coma obligatorio

Calentador::Calentador(int min, int max, int temperatura = 0)
{
    if (min > max){
        std::cout << "Error en el rango min-max" << std::endl;
        std::exit(EXIT_FAILURE);
        
        //throw "Error en el rango min-max";
    }
    if (temperatura >= min && temperatura <= max){
        this->temperatura = temperatura;
    }
    else    {
        this->temperatura = min;
    }
    incremento = 3;
    this->min = min;
    this->max = max;
}

void Calentador::operator++()
{
    if (temperatura + incremento <= this->max){
        temperatura += incremento;
    }
}

void Calentador::operator--()
{
    if (temperatura - incremento >= this->min){
        temperatura -= incremento;
    }
}

void Calentador::imprimetemperatura() const
{
    std::cout << "La temperatura es " << temperatura 
                << " °C" << std::endl; 
}

int Calentador::accedeTemperatura() const
{
    return temperatura;
}

void Calentador::imprimeFarenheit() const
{
    float farenheit = temperatura * 1.8 + 32;
    std::cout << "La temperatura es " << farenheit
                << " °F" <<std::endl;
}

bool Calentador::operator==(Calentador otro)
{
    if(this->temperatura == otro.temperatura)   {
        return true;
    }
    else    {
        return false;
    }
}

int main()
{
    //try{
        Calentador c1{-10, 10};
        Calentador c2{0, 30, 10};
        
        // c1 == c2 equivalente a c1.operator==(c2)
        if(c1 == c2){
            std::cout << "Iguales\n ";
        }
        else    {
            std::cout << "Diferentes \n";
        }
        
        // ++c1 es equivalente a c1.operator++();
        ++c1;
        c1.imprimetemperatura();
        c1.imprimeFarenheit();
     
        // --c2 es equivalente a c2.operator--();
        --c2;
        c2.imprimetemperatura();
        c2.imprimeFarenheit();
    /*}
    catch(const std ::runtime_error &e);
    */
}

