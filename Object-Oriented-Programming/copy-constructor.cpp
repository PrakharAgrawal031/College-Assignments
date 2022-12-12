#include<bits/stdc++.h>
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
            cout<< "Account Number: BNK"<<accnum<<" , Account Balance: "<<accbal<<endl;
        }
        Bank (Bank &x)
        {
            accnum = x.accnum+1;
            accbal = x.accbal+200;
        }
};
int main()
{
    Bank p1(35466, 4000);
    Bank p2(p1);
    p1.display();
    p2.display();
}
