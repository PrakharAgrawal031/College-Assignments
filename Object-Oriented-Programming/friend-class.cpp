#include <iostream>

using namespace std;

class Box
{ public:
    double length, width, height;
    Box()
    {
        cout<<"Enter the length: ";
        cin>>length;
        cout<<"\nEnter the width: ";
        cin>>width;
        cout<<"\nEnter the height: ";
        cin>>height;
    }
    friend class Printer;
    
};
class Printer
{
    public:
        void print(Box &box)
        {cout<<endl<<"Area of box is = "<<box.length*box.width*box.height;}
};

int main()
{
    Box b;
    Printer P;
    P.print(b);
}
