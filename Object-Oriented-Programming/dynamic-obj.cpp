#include <iostream>
using namespace std;

class Test
{
	int a, b;

public:
	Test()
	{
		cout << "Constructor is called" << endl;
		a = 1;
		b = 2;
	};

	~Test()
	{
		cout << "Destructor is called" << endl;
	}

	void show()
	{
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
	}
};

int main()
{
	Test *ptr;
	ptr = new Test;

	ptr->show();

	delete ptr;
	return 0;
}
