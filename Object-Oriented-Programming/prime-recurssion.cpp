#include<bits/stdc++.h>
using namespace std;
int checkprime(int a);
int main()
{
    int num;
    bool prime;
    cin >> num;
    prime = checkprime(num);
    if(prime==true) cout<<num<< " is prime";
    else cout<< num << " is not prime";
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
