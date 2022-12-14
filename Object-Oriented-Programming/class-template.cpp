#include<iostream>
using namespace std;
template<class T>
class vector
{
    public:
    T * arr;
    int size;
    vector(int m)
    {
        size  = m;
        arr = new T[size];
    }
    T dotproduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector <float> v1(3);
    v1.arr[0] = 10.1;
    v1.arr[1] = 1;
    v1.arr[2] = 0;
    vector <float> v2(3);
    v2.arr[0] = 2;
    v2.arr[1] = 1;
    v2.arr[2] = 3;
    float a = v1.dotproduct(v2);
    cout<<a;
}