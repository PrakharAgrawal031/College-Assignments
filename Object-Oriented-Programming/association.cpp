#include <bits/stdc++.h>

using namespace std;

class Car
{   public:
    string brand;
    string number;
    Car()
    {
        cout<<"Enter brand name: ";
        getline(cin, brand);
        cout<<"Enter car number: ";
        getline(cin, number);
    }
    
};

class Driver
{
    public:
    string name;
    void driver(Car &c)
    {
        cout<<"Enter the name of driver : ";
        getline(cin, name);
        cout<<name<<" is driving a "<<c.brand<<" "<<c.number<<endl;
        
    }
};

int main()
{
    Car C1, C2;
    cout<<endl<<endl;
    Driver d1, d2;
    d1.driver(C1);
    d2.driver(C2);
}
