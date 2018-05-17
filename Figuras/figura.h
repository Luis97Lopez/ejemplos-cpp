#ifndef FIGURA_INCLUIDA
#define FIGURA_INCLUIDA

class Figura
{
    protected:
        float area;
        
    public:
        Figura();
        virtual void calcularArea() = 0; // = 0 método abstracto, no hay código tiene que ser virtual
        void imprimirArea();
};

#endif