#include "../FileHeader/Figures.h"
#include <iostream>

void inputCircleData(std :: istream& inDevice, Circle &cir)
{
    double Xo, Yo, r;
    inDevice >> Xo >> Yo >> r;
    cir.Set(Xo, Yo, r);
}

void outputCircleData(std :: ostream& outDevice, Circle &cir)
{
    outDevice << "Area : " << cir.Area() << std :: endl; 
    
    outDevice << "Perimeter : " << cir.Perimeter() << std :: endl; 
}

// follow operator
std::istream &operator>> (std::istream & inDevice, Circle &cir);

std::ostream &operator<< (std::ostream & outDevice, Circle &cir);

int main()
{
    /*
    Circle mycir;
    Circle *circle = new Circle();
    if(circle != nullptr) 
    {
        circle -> Set(4,2,1.2);
        double myArea = circle -> Area();
        // Input and output of Circle
        inputCircleData(std::cin, mycir);
        outputCircleData(std::cout, mycir);

        std::cin >> mycir;
        std::cout << mycir;

        std :: cout << "Area: " << myArea << std :: endl;
        delete circle;
        circle = NULL;
        std :: cin.get();
    }
*/
    std::cout << "son";
    return 0;

}