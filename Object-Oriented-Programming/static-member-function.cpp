#include <iostream>
using namespace std;
class SBIBank
{
   
    public: 
        int accnum;
        static int member;
        SBIBank()
        {
            cout<<"Enter the account number: ";
            cin>>accnum;
            member++;
        }
};
int SBIBank::member = 0;
int main()
{
    SBIBank r1;
    
    cout<<"r1 = "<<r1.accnum<<endl;
    cout<<"Number of members = "<<r1.member<<endl;
    SBIBank r2;
    cout<<"r2 = "<<r2.accnum<<endl;
    cout<<"Number of members = "<<r2.member;
}
