#include <iostream>
using namespace std;
class SBIBank
{
    public: 
        static int roi;
};
int SBIBank::roi = 9;
int main()
{
    SBIBank r1;
    
    cout<<"r1 = "<<r1.roi<<"%";
}
