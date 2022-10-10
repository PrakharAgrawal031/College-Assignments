#include <iostream>

using namespace std;
int counter = 0;
class maths
{
public:
    maths()
    {
        counter++;
        cout << "object created" << endl;
        cout << "counter = " << counter << endl;
    }
    ~maths()
    {
        cout << "oject destroyed" << endl;
        counter--;
        cout << "counter = " << counter << endl;
    }
};

int main()
{
    maths M1;
    maths M2;

    for (int i = 0; i <1; i++)
    {
        cout << "inside a loop\n";
        maths M3;
    }
    cout << "loop ended\n";

    return 0;
}
