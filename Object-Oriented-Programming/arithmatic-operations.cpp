#include<bits/stdc++.h>
using namespace std;
int checkprime(int a);
int squareroot(int sum);
int add(int a, int b);
int product(int a, int b);
int main()
{
    int a , b, sum;
    cout<<"Enter the numbers";
    cin>>a>>b;
    sum = add(a,b);
    checkprime(sum);
    product(a,b);
    squareroot(sum);
    
    bool prime;
    prime = checkprime(sum);
    if(prime==true) cout<<sum<< " is prime";
    else cout<< sum << " is not prime";
}
int product(int a, int b)
{
    cout<<"\nProduct = "<<a*b<<endl;
}
int add(int a, int b)
{
    return a+b;
}
int squareroot(int sum)
{
    cout<<"Square root = "<<sqrt(sum)<<endl;
}
int checkprime(int a)
{
    bool prime = false;
    for(int i = 2 ; i<a; i++)
    {
        if(a%i == 0)
        {
            return prime;
        }
    }
    prime = true;
    return prime;
}
