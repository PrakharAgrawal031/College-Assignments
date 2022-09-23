#include <iostream>

using namespace std;
int counter = 0;
class maths
{
    public:
    maths()
    {
        counter++;
        cout<<"A new object of this class has been created"<<endl;
        cout<<"counter value updated to "<<counter<<endl;
    }
    ~maths()
    {
        cout<<"an oject of this class has been destroyed\n updated the value of counter"<<endl;
        counter--;
        cout<<"counter = "<<counter<<endl;
        
    }
    
};

int main()
{
    maths M1;
    maths M2;
    
    for(int i = 0; i<2; i++)
    {
        cout<<"inside a loop\n";
        maths M3;   
    }
    cout<<"loop ended\n";

    return 0;
}
