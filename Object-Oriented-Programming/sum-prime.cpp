#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b, sum;
   
    cin>>a>>b;
    sum= a+b;
    for(int i = 2; i<sum-1; i++)
    {
        if(sum%i == 0)
        {
            cout<<"sum = "<< sum <<" is not prime ";
            return 0;
        }
    }
    cout<<"sum = "<< sum <<" is prime ";
    return 0; 
}
