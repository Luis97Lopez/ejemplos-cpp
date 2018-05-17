#include "figura.h"

Figura :: Figura ()
{
    area = 0;
}
/*
void Figura :: calcularArea()
{
    std :: cout << "No se como calcular el area \n";
}
*/
void Figura :: imprimirArea()
{
    std::cout << "El area es:" << area << "\n";
}