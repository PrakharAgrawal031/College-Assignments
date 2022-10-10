#include <iostream>

using namespace std;

class Box
{
    double length, width;
    public: 
        void setdin(double l , double w);
        friend void printdin(Box);
};
void Box::setdin(double l , double w)
{
    length = l;
    width = w;
}
void printdin(Box box)
{
    cout<<"length of box: "<<box.length<<endl;
    cout<<"width of box: "<<box.width<<endl;
}
int main()
{
    Box box;
    box.setdin(10.0,20.0);
    printdin(box);
}
