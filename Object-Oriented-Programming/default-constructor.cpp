#include<iostream>
using namespace std;
class Bank
{
    int accnum;
    string person;
    public:
        Bank()
        {
            cout<<"Enter accout holder's name: ";
            cin>>person;
            cout<<"Enter the account number: ";
            cin>>accnum;
        }
        void display(void) { 
            cout<< "Name: "<< person<<" , Account Number: "<<accnum;
        }
};
int main()
{
    Bank p1;
    p1.display();
}
