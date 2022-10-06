#include <stdio.h>
int main()
{
  int num, *ptr,**ptr2;
  printf("Value of num = ");
  scanf("%d", &num);
  ptr=&num;
  ptr2=&ptr;
  printf("num: %d\n", num);
  printf("address of num: %p\n", ptr);
  printf("address of ptr: %p\n", ptr2);  
  printf("value of num using ptr: %d\n", *ptr);
  printf("value of num using ptr2: %d\n", **ptr2);
}