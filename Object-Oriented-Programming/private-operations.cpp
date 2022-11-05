#include<iostream>
using namespace std;
class A 
{
    private:
    int a , b;
    void show()
    {
        cout<<"private function"<<endl;
    }
    public:
    void display()
    {
        show();
        cout<<"a = "<<a;
        cout<<" b = "<<b;
    }
    A(int x ,int y)
    {
        a = x;
        b = y;
        
    }
};

int main()
{
    A obj(10,20);
    obj.display();
}
