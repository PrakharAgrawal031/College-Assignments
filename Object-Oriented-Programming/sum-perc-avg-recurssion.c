#include<stdio.h>
int calcmarks(int arr[])
{
    int sum = 0;
    float avg , perc;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    
    avg = sum/5;
    perc = (sum*100)/500;
    printf("Average = %.2f, Percent = %.2f, Grade = ", avg, perc);
    if (perc>90)
    {
        printf("A+");
    }
    else if (perc>75)
    {
        printf("A");
    }
    else if (perc>60)
    {
        printf("B");
    }
    else if (perc>40)
    {
        printf("C");
    }
    else
    {
        printf("D");
    }
}
int main(int argc, char const *argv[])
{
    int arr[5];
    printf("Enter the marks: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    calcmarks(arr);
    return 0;
}
