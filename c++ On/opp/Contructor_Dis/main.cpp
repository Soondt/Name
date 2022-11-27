#include <iostream>

class MyinArray{
    private: 
        int *pArr;
        int size;
    public:
        MyinArray();
        MyinArray(int);
        void update(int, int);
        int Get(int);
        MyinArray(const MyinArray&);
        ~MyinArray();
};

MyinArray::MyinArray(int sz)
{
    size = sz;
    pArr = new int[size];
    for (int i = 0; i < sz; i++)
    {
        /* code */
        pArr[i] = 0;
    }
}

MyinArray::MyinArray(const MyinArray &src)
{
    size = src.size;
    pArr = new int[size];
    for (int i = 0; i < size; i++)
    {
        /* code */
        pArr[i] = src.pArr[i]; // copy new memory 
    }
}

void MyinArray::update(int k, int val)
{
    pArr[k] = pArr[val];
}

int MyinArray::Get(int k)
{
    return pArr[k];
}

MyinArray::MyinArray(int sz)
{
    if(sz <= 0)
    {
        sz = 0;
        pArr = NULL;
        }

    size = sz;
    pArr = new int[sz];
    for (int i = 0; i < sz; i++)
    {
        /* code */
        pArr[i] = 0;
    }   
}

int main()
{
    MyinArray c;
    MyinArray a(3);
    MyinArray b(a);  // copy
    a.update(1, 2);
    std::cout << b.Get(1);
    return 0; 
}