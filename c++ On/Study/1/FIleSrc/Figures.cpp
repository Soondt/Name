#include "../FileHeader/Figures.h"

const double PI = 3.14;

void Point2D :: Set(double Xo, double Yo)
{
    this -> X = Xo;
    this -> Y = Yo; 
}

void Point2D :: Move(double dX , double dY)
{
    dX += X;
    dY += Y;
}

void Point2D :: Scale(double sX , double sY)
{
    sX *= X;
    sY *= Y;
}

void Circle :: Move(double dX, double dY)
{
    Center.Move(dX, dY);
}

void Circle :: Set(double Xo, double Yo, double r)
{
    Center.Set(Xo, Yo);
    if(r < 0 )
        r = 0;
    this -> Radius = r;
}

double Circle :: Area()
{
    return PI * Radius* Radius;
} 

double Circle :: Perimeter()
{
    return 2 * PI * Radius;
}

void Circle :: Set(double r)
{
    if(r >= 0)
        Radius = r;
}
