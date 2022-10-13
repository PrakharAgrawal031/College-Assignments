#include <stdio.h>

int main ()
{
  int size, temp;
  printf ("Enter the size of array: ");
  scanf ("%d", &size);
  int arr[size];
  printf ("Enter the elements of array\n");
  for (int i = 0; i < size; i++)
    {
      printf ("arr[%d] : ", i + 1);
      scanf ("%d", &arr[i]);
    }
  for (int i = 0; i < size; i++)
    {
      printf ("%d ", arr[i]);
    }
  printf ("\n");

  int s;
  for (int i = 1; i < size; i++)
    {
      s = arr[i];
      int j = i - 1;

      while (j >= 0 && arr[j] > s)
	{
	  arr[j + 1] = arr[j];
	  j = j - 1;
	}
      arr[j + 1] = s;
    }
  for (int i = 0; i < size; i++)
    {
      printf ("%d ", arr[i]);
    }
  return 0;
}
