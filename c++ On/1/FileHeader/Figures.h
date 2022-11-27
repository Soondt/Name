// File: Figures.h
#ifndef _FIGURES_H_
#define _FIGURES_H_

class Point2D
{
private:
    /* data */
    double X, Y;
public:
    Point2D(/* args */);
    void Set(double Xo, double Yo); // set value
    void Move(double dX, double dY); // move according to point coordinates
    void Scale(double sX, double sY);
    ~Point2D();
}; // end declaration of the Point2D 

class Circle
{
private:
    /* data */
    Point2D Center;
    double Radius; 
public:
    Circle(/* args */);
    void Move(double dX, double dY);
    void Set(double Xo, double Yo, double r);
    void Set(double r);
    double Area();
    double Perimeter();
    ~Circle();
}; // end declaration of the Circle 

#endif //_FIGURES_H_
