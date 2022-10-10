#include <iostream>
using namespace std;
class one
{
    int a,b;
    public:
        one()
        { a=2; }
        int func()
        {return a;}
        void func2()
        { a = 3;}
};
class two
{
    int z,b;
    public:
        void test(one &a)
        {cout<<a.func()<<endl;}
};
int main()
{
    one alpha;
    cout<<alpha.func()<<endl;
    alpha.func2();
    two beta;
    beta.test(alpha);
    return 0;
}
