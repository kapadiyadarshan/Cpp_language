#include<iostream>
using namespace std;

class number
{
    public :
        static int n;
        
        static void num()
        {
            cout << "Enter Number = ";
            cin  >> n;
        }
};

class square : public number
{
    public :
        square()
        {
            cout << "Square is " << n*n <<endl;
        }
};

class cube : public number
{
    public :
        cube()
        {
            cout << "Cube is " << n*n*n <<endl;
        }
};

int number :: n =0;


int main()
{
    number :: num();
    
    square o1;
    cube o2;
    
    return 0;
}