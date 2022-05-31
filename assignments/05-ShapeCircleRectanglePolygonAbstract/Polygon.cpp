#include "Polygon.hpp"

Polygon::Polygon() {
    n = 0;
    lado = 0;
    apotema = 0;
}

Polygon::Polygon(int valX, int valY, int n, int lado, int apotema) : Shape {valX, valY}
{
    this->n = n;
    this->lado = lado;
    this->apotema = apotema;
}

std::string Polygon::draw()
{
    return "Soy un polígono";
}

double Polygon::getArea()
{
    return (double) n*lado*apotema/2;
}