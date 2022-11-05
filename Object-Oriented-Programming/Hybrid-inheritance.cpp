#include<iostream>
#include<string>
using namespace std;

class Eigen
{
    public:
    string maincomname = "Eigen";
        Eigen()
        {cout<<"The company "<<maincomname<<" is a pharmaceutical venture"<<endl;}
};
class Ros
{
    public:
    string namec = "ros";
    Ros()
    {cout<<"The company "<<namec<<" is a pharmaceutical venture"<<endl;}
};
class Pfizer: public Eigen
{
    public:
    string nameb = "Pfizer";
    Pfizer()
    {cout<<"The company "<<nameb<<" is subsidary company of "<<maincomname<<endl;}
};
class Stella: public Pfizer, public Ros
{
    public:
    Stella()
    {
        cout<<"Stella is a joint venture of "<<nameb<<" and "<<namec<<endl;
    }
};
int main()
{
    Stella s1;
}
