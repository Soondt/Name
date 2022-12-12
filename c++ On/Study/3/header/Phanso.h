// tap tin Phanso.h
#ifndef _PHANSO_H_
#define _PHANSO_H_

#include <iostream>

class Phanso
{
private:
    /* data */
    int tu, mau;
public:
    Phanso(/* args */);
    Phanso(int, int);
    Phanso& operator+=( Phanso&);
    const Phanso operator+(const Phanso&) const;
    bool operator==(const Phanso&) const;
    Phanso &operator++();
    Phanso operator++(int);
    ~Phanso();

friend std::ostream& operator<<(std::ostream &out, const Phanso& src);
};

#endif // _PHANSO_H_