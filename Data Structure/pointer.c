#include <stdio.h>
int main()
{
  int num, *ptr;
  printf("Value of num = ");
  scanf("%d", &num);
  ptr=&num;
  printf("num: %d\n", num);
  printf("address of num: %p\n", ptr);  
  printf("value of num using ptr: %d\n", *ptr);
}