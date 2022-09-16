#include<iostream>
using namespace std;
class Bank
{
    int accnum;
    int accbal;
    public:
        Bank(int i, int n)
        {
            accbal=n;
            accnum=i;
        }
        void display(void) { 
            cout<< "Account Number: "<<accnum<<" , Account Balance: "<<accbal;
        }
};
int main()
{
    Bank p1(36654, 4000);
    p1.display();
}
