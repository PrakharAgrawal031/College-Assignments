#include<iostream>
#include<string>
using namespace std;

class Father
{
    public:
    string namep;
};
class Mother
{
    public:
    string namem;
};
class Child: public Father, public Mother
{
    public:
    string namec;
};
int main()
{
    Child Obj1;
    Obj1.namec = "dave";
    Obj1.namep = "Gabe";
    Obj1.namem = "Gabriella";
    cout<<"Child of "<<Obj1.namep<<" and "<<Obj1.namem<<" is "<< Obj1.namec;
}
