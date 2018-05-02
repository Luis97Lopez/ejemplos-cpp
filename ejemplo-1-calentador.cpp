#include <iostream>

class Calentador
{
    private:
        int temperatura;
        int incremento;
        int min;
        int max;
    
    public:
        Calentador(int temperatura, int min, int max);
        void calentar();
        void enfriar();
        void imprimeCentigrados()   const;
        void imprimeFahrenheit()    const;
        int accedeTemperatura()     const;
        bool operator==(Calentador otro);    //Sobrecarga de método miembro.
};  

Calentador::Calentador(int temperatura, int min, int max)
{
    if  (temperatura <= max && temperatura >= min)  {
        this->temperatura = temperatura;
    }
    else    {
        this->temperatura = min;
    }
    
    //if  (min > max)    {
        //std :: cout << "Error en el rango min-max" << std::endl;
        //std::exit(EXIT_FAILURE);
        //throw "Erro en el rango min-max";
    //}
    incremento = 3;
}

void Calentador :: calentar()
{
    temperatura += incremento;
}

void Calentador :: enfriar()
{
    temperatura -= incremento;
}

void Calentador :: imprimeCentigrados() const
{
    std :: cout  << "La temperatura es " << temperatura << std :: endl;
}

int Calentador :: accedeTemperatura() const
{
    return temperatura;
}

void Calentador :: imprimeFahrenheit() const
{
    std::cout   << "La temperatura es " << temperatura * 1.8 + 32 
                << "°F" << std::endl;
}

bool Calentador :: operator==(Calentador otro)
{
    if  (this->temperatura == otro.temperatura) {
        return true;
    }
    else    {
        return false;
    }
}

int main()
{
    //try {
        Calentador c1{-10,10,10};
        Calentador c2{0,30,10};
        
        if  (c1 ==  c2) {
            std :: cout << "Iguales";
        }
        else    {
            std :: cout << "Diferentes" << std::endl;
        }
        c1.calentar();
        c1.imprimeCentigrados();
        
        c2.enfriar();
        c2.imprimeCentigrados();
        
        c1.imprimeFahrenheit();
        return 0;
    //}
    //catch   (const std::runtime_error& e);
}