#include<iostream>
using namespace std;
class Object
{
  int A = 0;
public:
    Object ()
  {
    cout << "a new object has been created" << endl;
  }
  void add_obj (void)
  {
    A++;
    cout << "A = " << A << endl;
  }
  ~Object ()
  {
    cout << "Object has been destroyed" << endl;
  }
};

Object external_O3;


int
main ()
{
  cout << "Auto object: \n";
  for (int i = 0; i < 2; i++)
    {
      Object auto_O1;
      auto_O1.add_obj ();
    }

  cout << "Static object: \n";
  for (int i = 0; i < 2; i++)
    {
      static Object static_O2;
      static_O2.add_obj ();
    }

  cout << "External object: \n";
  for (int i = 0; i < 2; i++)
    {
      external_O3.add_obj ();
    }
}
