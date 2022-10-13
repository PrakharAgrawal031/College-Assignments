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

  for (int i = 0; i < size - 1; i++)
    {
      int m_id = i;
      for (int j = i + 1; j < size; j++)
	{
	  if (arr[j] < arr[m_id])
	    {
	      temp = arr[j];
	      arr[j] = arr[m_id];
	      arr[m_id] = temp;
	    }
	}

    }
  for (int i = 0; i < size; i++)
    {
      printf ("%d ", arr[i]);
    }

  return 0;
}
