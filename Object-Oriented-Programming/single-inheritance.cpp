#include<iostream>
#include<string>
using namespace std;

class Parent
{
    public:
    string namep;
};
class Child: public Parent
{
    public:
    string namec;
};
int main()
{
    Child Obj1;
    Obj1.namec = "dave";
    Obj1.namep = "Gabe";
    cout<<"Child of "<<Obj1.namep<<" is "<< Obj1.namec;
}
