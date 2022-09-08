#include <stdio.h>
int factorial(int num)
{
    if(num==1) return 1;
    else return num*factorial(num-1);
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int fact = factorial(num);
    printf("Factorial of %d = %d", num, fact);
}
