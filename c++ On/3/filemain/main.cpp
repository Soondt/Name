#include "..\..\3\header\Phanso.h"

int main()
{
    Phanso a(1,3), b(2,5), c;
    c = a + b;
    std:: cout << "c= " << c << std::endl;
    std:: cout << "c= " << ++c << std::endl;
    a += b;
    std:: cout << "a = " << a << std::endl;    
    std:: cout << "b = " << ++b << std::endl;
    std:: cout << "b = " << b << std::endl;
    return 0;
}