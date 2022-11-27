#include <iostream>
#include <fstream>
#include <vector>

typedef std::vector<double> doubleArray;
using namespace std;

void matrixInit(std::vector<doubleArray> &a, int n)
{
    a.resize(n);
    for (int i = 0; i < a.size(); i++)
    {
        /* code */
        a[i].resize(n);
    }
}

std::istream &operator >> (std::istream &inDevice, std::vector<doubleArray> &a)
{ 
    int n;
    inDevice >> n;
    matrixInit(a, n);
    for (int i = 0; i < a.size(); i++)
    {
        /* code */
        for (int j = 0; j < a[i].size(); j++)
        {
            /* code */
            //a[i][j] = 0;
            //if(inDevice)
                inDevice >> a[i][j];
        }    
    }
    return inDevice;
}

std:: ostream &operator <<(std::ostream & outDevice, std::vector<doubleArray> &a)
{
    outDevice <<a.size() << std::endl;
    for (int i = 0; i < a.size(); i++)
    {
        /* code */
        for (int j = 0; j < a[i].size(); j++)
        {
            /* code */
            outDevice << a[i][j] << "  ";
        }
        outDevice << std::endl;
    }
    return outDevice;
}

int main()
{
    std::vector<doubleArray> A;
    decltype(A) y;

    std::cin >> A;
    std::cout << A;

    std::cin >> y;
    std::cout << y;
    
    std::cin.get();
    return 0;
}