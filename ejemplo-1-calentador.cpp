#include <iostream>

class Calentador
{
    private:
        int temperatura;
    
    public:
        Calentador();
        void calentar();
        void enfriar();
        void imprimeTemperatura();
};  

Calentador::Calentador()
{
    temperatura = 15;
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

int main()
{
    Calentador c1,c2;
    c1.calentar();
    c1.imprimeTemperatura();
    
    c2.enfriar();
    c2.imprimeTemperatura();
    return 0;
}