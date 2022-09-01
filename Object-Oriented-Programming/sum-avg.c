#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5],sum=0;
    float perc, avg;
    printf("Enter the marks: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum+arr[i];
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
    
    
    return 0;
}
