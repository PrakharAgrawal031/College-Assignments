#include <iostream>

using namespace std;

class person {
    string name;
    int age;
    public: 
        void getdata(void);
        void display(void);      
};
void person::getdata(void) {
    cout<< " Enter the name of person : ";
    cin>>name;
    cout<<endl<<"Enter the age of the person : ";
    cin>>age;
}
void person :: display(void) {
    cout<<" Name = "<<name<<" , Age = "<< age;
}
int main()
{
    person P1;
    P1.getdata();
    P1.display();

    return 0;
