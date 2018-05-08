#include <iostream>
#include <cmath>

class Polinomio
{
    friend void operator<<(std :: ostream &, Polinomio);
    friend void operator>>(std :: istream &, Polinomio &);
    private:
        int a;
        int b;
        int c;

    public:
        Polinomio(int a,int b,int c);
        int operator()(int);
        Polinomio operator+(Polinomio otro);
        float operator~();
};

Polinomio :: Polinomio (int a, int b, int c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

//Sobrecarga de evaluación en x
int Polinomio :: operator()(int x)
{
    return (this->a * x * x) + (this->b * x) + (this->c);
}

//Sobrecarga de suma con otro polinomio
Polinomio Polinomio :: operator+(Polinomio otro)
{
    Polinomio final{this->a + otro.a, this->b + otro.b, this->c + otro.c};
    return final;
}

//La raíz del polinomio
float Polinomio :: operator~()
{
    float x = (-this->b + std :: sqrt(this->b * this->b - (4 * this->a * this->c)))/ 2 * this->a;
    return x;
}

//Sobrecarga global de salida de polinomio
void operator<<(std :: ostream &salida, Polinomio polinomio)
{
    salida << polinomio.a << "x² + " << polinomio.b << "x + " << polinomio.c << std :: endl;
}

//Sobrecarga global de entrada de polinomio
void operator>>(std :: istream &entrada, Polinomio &polinomio)
{
    entrada >> polinomio.a >> polinomio.b >> polinomio.c;
}

int main()
{
    Polinomio p{0,0,0};
    
    std :: cin >> p;
    /*int x = 2;
    int r = p(x);
    
    std :: cout << "El polinomio " << p;
    std :: cout << "Evaludado en p(" << x << ") = " << r << std :: endl;
    std :: cout << "La raiz de " << p;
    
    float raiz = ~p;
    std :: cout << " es " << raiz;*/
    
    std :: cout << p(~p);
    
    return 0;
}

