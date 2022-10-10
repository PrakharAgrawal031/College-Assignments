#include <iostream>

using namespace std;

class Object
{
    private : int value;
    public: 
        Object()
        {
            value = 0;
        }
        void addvalue(int value_in)
        {
            value+=value_in;
        }
        int getvalue()
        {
            return value;
        }
};
Object ext_obj;
int main()
{
    ext_obj.addvalue(5);
    for(int i = 0; i<2; i++ )
    {
        Object auto_obj;
        auto_obj.addvalue(10);
        
        static Object st_obj;
        st_obj.addvalue(15);
        cout<<"Automatic object has the value: "<<auto_obj.getvalue()<<endl;
        cout<<"Static object has the value: "<<st_obj.getvalue()<<endl;
    }
    cout<<"External object has the value: "<<ext_obj.getvalue()<<endl;
}
