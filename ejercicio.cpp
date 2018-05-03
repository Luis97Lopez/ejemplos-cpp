#include <iostream>

class Fraccion
{
    private:
        int numerador;
        int denominador;
    
    public:
        Fraccion(int numerador, int denominador);
        void imprimeFraccion();
        Fraccion operator+(Fraccion otro);
        Fraccion operator-(Fraccion otro);
        Fraccion operator*(Fraccion otro);
        Fraccion operator/(Fraccion otro);
};

Fraccion :: Fraccion(int numerador, int denominador)
{
    this->numerador = numerador;
    this->denominador = denominador;
}

void Fraccion :: imprimeFraccion()
{
    std :: cout << numerador << " / " << denominador << std::endl;
}

Fraccion Fraccion :: operator+(Fraccion otro)
{
    Fraccion f{ this->numerador * otro.denominador + this->denominador * otro.numerador,
                this->denominador * otro.denominador};
    return f;
}

Fraccion Fraccion :: operator-(Fraccion otro)
{
    Fraccion f{ this->numerador * otro.denominador - this->denominador * otro.numerador,
                this->denominador * otro.denominador};
    return f;
}

Fraccion Fraccion :: operator*(Fraccion otro)
{
    Fraccion f{ this->numerador * otro.numerador,
                this->denominador * otro.denominador};
    return f;
}

Fraccion Fraccion :: operator/(Fraccion otro)
{
    Fraccion f{ this->numerador * otro.denominador,
                this->denominador * otro.numerador};
    return f;
}

int main()
{
    Fraccion f1{3,8};
    Fraccion f2{4,5};
    f1.imprimeFraccion();
    f2.imprimeFraccion();
    f1.operator+(f2).imprimeFraccion();
    f1.operator-(f2).imprimeFraccion();
    f1.operator*(f2).imprimeFraccion();
    f1.operator/(f2).imprimeFraccion();
    return 0;
}