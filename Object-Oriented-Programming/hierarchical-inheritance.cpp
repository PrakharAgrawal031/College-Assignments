#include<iostream>
#include<string>
using namespace std;

class Car
{
    public:
     int number;
};
class BMW: public Car
{
    public:
    BMW(int n)
    {
        number = n;
        cout<<"Car: "<<number<<" is of company BMW"<<endl;
    }
};
class Audi: public Car
{
    public:
    Audi(int n)
    {
        number = n;
        cout<<"Car: "<<number<<" is of company Audi"<<endl;
    }
};
int main()
{
    BMW c1(6842);
    Audi c2(3514);
}
