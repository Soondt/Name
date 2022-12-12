#include <iostream>
#include<math.h>
using namespace std;

class Singleton
{
private:
    static Singleton * _instance; // doi tuong lop duy nhat
    Singleton();    // phuong thuc khoi tao dang private de khong cho nguoi dung tao ra 1 obj khac
public:
    static Singleton *Getinstance();
    ~Singleton();
};

Singleton *Singleton::_instance = NULL;

Singleton::Singleton()
{
    _instance = NULL;
}

Singleton * Singleton::Getinstance()
{
    if(_instance == NULL)
        _instance = new Singleton;
    return _instance;
}

class SortAlgorithm
{
    private:
    int a, b;
        static SortAlgorithm* _algorithm; // luu doi tuong duy nhat cua class
        void (*currentAlgorithm)(float[], int); // luu thuat toan dc chon
        SortAlgorithm(); // khong cho nguoi dung tao doi tuong khac
    public:
        static SortAlgorithm *getObject(void (*pAlg)(float[], int));
        static void  SelectionSort(float[], int);
        static void InsertionSort(float[], int);
        static void InterchangeSort(float[], int);
        void Sort(float[], int);
        const SortAlgorithm operator+ (const SortAlgorithm& ps) const;
        const SortAlgorithm operator- (const SortAlgorithm& ps) const;
        const SortAlgorithm operator* (const SortAlgorithm& ps) const;
        const SortAlgorithm operator/ (const SortAlgorithm& ps) const;
};

// khoi tao doi tuong
SortAlgorithm *SortAlgorithm::_algorithm = NULL;

SortAlgorithm::SortAlgorithm()
{
    currentAlgorithm = InsertionSort; //chon mac dinh
}

SortAlgorithm *SortAlgorithm::getObject(void (*pAlg)(float[], int))
{
    if(_algorithm == NULL)
    
        _algorithm = new SortAlgorithm;
    
    else
    
        _algorithm ->currentAlgorithm = pAlg;
    

    return _algorithm;
}

void SortAlgorithm::Sort(float a[], int n)
{
    if (currentAlgorithm != NULL)
    {
        /* code */
        currentAlgorithm(a, n);
    }  
}

void SortAlgorithm::SelectionSort(float a[], int n)
{
    int min;
    for (int i = 0; i< n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min] )
            {
                min = j;
            }
        }

        if (min != i)
        {
            float temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }    
    }   
}

void SortAlgorithm::InsertionSort(float a[], int n)
{
    int pos;
    float x;
    for (int i = 0; i < n; i++)
    {
        x = a[i];
        for (pos = i; (pos > 0) && (a[pos - 1] > x); pos--)
        {
            a[pos] = a[pos - 1];
        }
        a[pos] = x;
    }
}

void SortAlgorithm::InterchangeSort(float a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }       
        }      
    } 
}

const SortAlgorithm SortAlgorithm::operator+ (const SortAlgorithm& ps) const
{ 
    SortAlgorithm temp;
    temp.a += a;
    temp.b += b;  
    return temp;
}

int main()
{
    // Singleton *obj = Singleton::Getinstance();
    // float a[] = {1.4, -1.5, 3.3, 0};
    // int temp = sizeof(a) / sizeof(a[0]);
    // SortAlgorithm *alg = SortAlgorithm::getObject((SortAlgorithm::SelectionSort));
    // alg -> Sort(a,temp);
    // std::cout << " mang sau khi sap xep: " << std::endl;
    // for (int i = 0; i < temp; i++)
    // {
    //     std::cout << a[i]<< " " ;
    // }
    
    int a[] = {10,12};
    for ( const auto& x: a)
    {
        std:: cout << x << " ";

    }


    return 0;

}