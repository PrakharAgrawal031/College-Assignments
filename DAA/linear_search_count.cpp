
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>

using namespace std;

int
linear_search (int a[], int N, int key, int count)
{


  for (int i = 0; i < N; i++)
    {
      count+=3;
      if (a[i] == key)
	 {
	  count += 2;
	  return i;
	 }
    }
    count++;
  return -1;
};

int
main ()
{
  int count = 0;
  int result;
  int num;
  int key;
  cout << "enter size of array";
  cin >> num;
  int arr[num];
  cout << "enter elements of array";
  for (int i = 0; i < num; i++)
    {
      cin >> arr[i];
      count += 2;
    }
  count = count + (2 * num + 2);

  cout << "enter the number to search";
  cin >> key;
    
  result = linear_search (arr, num, key, count);
  count+=12;
  if (result == -1)
    {
        count++;
      cout << "Number in not in array";
    }
  else
    {
      count++;
      cout << "number is present on " << result << " position in array";

    }
  cout << endl << count;
  return 0;
}
