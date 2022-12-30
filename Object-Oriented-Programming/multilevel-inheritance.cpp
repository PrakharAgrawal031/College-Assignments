#include<iostream>
#include<string>
using namespace std;

class Vehicle
{
    public:
    Vehicle(){cout<<"Obj is of type Vehicle."<<endl;}
};
class Car: Vehicle
{
    public:
    Car(){cout<<"This vehicle is known as car."<<endl;}
};
class Company: public Car
{
    public:
    Company(){cout<<"Car is of company BMW";}
};
int main()
{
    Company Obj1;
}
