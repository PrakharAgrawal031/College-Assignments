#include<stdio.h>
int main(int argc, char const *argv[])
{
    int first = 0, second = 1, temp;
    printf("%d %d ", first, second);
    for (int i = 0; i < 10; i++)
    {
        temp = first+second;
        first = second;
        second = temp;
        printf("%d ", temp);
    }
    
    return 0;
}
