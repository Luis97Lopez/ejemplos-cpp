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
        void imprimeCentigrados()   const;
        void imprimeFahrenheit()    const;
        int accedeTemperatura()     const;
};  

Calentador::Calentador()
{
    temperatura = 15;
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

int main()
{
    Calentador c1,c2;
    c1.calentar();
    c1.imprimeCentigrados();
    
    c2.enfriar();
    c2.imprimeCentigrados();
    
    c1.imprimeFahrenheit();
    return 0;
}