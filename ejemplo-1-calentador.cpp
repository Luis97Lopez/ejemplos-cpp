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
        void imprimeTemperatura();
        int accedeTemperatura() const;
};  

Calentador::Calentador()
{
    temperatura = 15;
    incremento = 3;
}

void Calentador :: calentar()
{
    temperatura += 5;
}

void Calentador :: enfriar()
{
    temperatura -= 5;
}

void Calentador :: imprimeTemperatura()
{
    std :: cout  << "La temperatura es " << temperatura << std :: endl;
}

int Calentador :: accedeTemperatura() const
{
    return temperatura;
}

int main()
{
    Calentador c1,c2;
    c1.calentar();
    c1.imprimeTemperatura();
    
    c2.enfriar();
    c2.imprimeTemperatura();
    return 0;
}