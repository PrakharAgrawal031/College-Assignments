#include<iostream>
#include<math.h>
using namespace std;
void sine(int a);
void cosine(int a);
void squareroot(int a);
void square(int a );

int main()
{
    int a;
    cout<<"Enter the numbers: "<<endl;
    cin>>a;
    cosine(a);
    sine(a);
    squareroot(a);
    square(a);
}
void sine(int a)
{
    cout<<"Sine("<<a<<") = "<<sin(a)<<endl;
}
void cosine(int a)
{
    cout<<"Cos("<<a<<") = "<<cos(a)<<endl;
}
void squareroot(int a)
{
    cout<<"Square root of "<<a<<"="<<sqrt(a)<<endl;
}

void square(int a)
{
    cout<<"Square of "<<a<<" = "<<pow(a,2);
}

