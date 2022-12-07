#include <iostream>

using namespace std;

class A{
    public: 
        virtual void dosomething();
};
class B : public A {};
class C{};

void test(const A &a)
{
    //a.dosomething(); error
    A *b ;
    b = const_cast<A*> (&a); // thuc hien bo const
    b->dosomething();

}

static int value = 10;

int main()
{
    float a = 9.1;
    int b = static_cast<int> (a);

    float cn = 9.6;
    value ++;

    cout << "a = " << a << endl;
    cout << "b = " << (int)cn << endl;
    cout << "Value = " << value;
/*
    A *an = new A;
    B * bn = static_cast <B*> (an);

    B *bm = dynamic_cast <B*> (an); // Case have virtual

    delete bn;
    bn = nullptr;

    C *c = reinterpret_cast<C*> (an); // chuyen 2 duoi tuong khong lien quan toi nhau
*/
    return 0;
}