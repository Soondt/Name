#include "C:\Users\Admin\OneDrive\Desktop\c++ On\3\header\Phanso.h"

Phanso :: Phanso ()
{
    tu = 0;
    mau = 1;
}

Phanso ::Phanso (int a, int b)
{
    a = tu;
    b = mau;
}


Phanso& Phanso :: operator+=(const Phanso & src)
{
    src.tu = tu * src.mau + mau * src*tu;
    src.mau = mau * src.mau;
    return *this ;
}

const Phanso Phanso::operator+(const Phanso &src) const
{
    Phanso temp;
    temp.tu = temp.tu * mau + temp.mau * tu;
    temp.mau = mau *temp.mau;
    return temp;
}

Phanso& Phanso::operator++()
{
    tu = tu + mau;
    return *this;
}
Phanso Phanso::operator++(int )
{
    Phanso temp = *this;
    ++(*this);
    return temp;
}
std::ostream& operator<<(std::ostream &out, const Phanso& src)
{
    out << src.tu   << "/" << src.mau;
    return out;
}