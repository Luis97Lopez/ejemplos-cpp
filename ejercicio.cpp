#include <iostream>
class Fraccion
{
    friend void operator<<(std :: ostream &, Fraccion); //Permite acceder a las variables privadas
    friend void operator>>(std :: istream &, Fraccion &);
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

void operator << (std :: ostream &salida, Fraccion f)
{
    salida << f.numerador << " / " << f.denominador << std :: endl;
}

void operator >> (std :: istream &entrada, Fraccion &f)
{
    entrada >> f.numerador;
    entrada >> f.denominador;
}

int main()
{
    Fraccion f1{3,8};
    Fraccion f2{4,5};
    
    std :: cin >> f1;
    std :: cin >> f2;
    
    std :: cout << f1;
    std :: cout << f2;
    
    std :: cout << (f1 + f2);
    std :: cout << (f1 - f2);
    std :: cout << (f1 * f2);
    std :: cout << (f1 / f2);
    return 0;
}
