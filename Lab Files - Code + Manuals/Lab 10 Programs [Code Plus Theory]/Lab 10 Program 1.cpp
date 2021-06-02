#include<iostream>
#include<string.h>
using namespace std;
class xyz
{
    int x,y;
public:
    virtual void getdata()
    {
        cout<<"Enter x and y"<<endl;
        cin>>x>>y;
    }
    virtual void putdata()
    {
        cout<<"Data of the class xyz:"<<endl;
        cout<<"value of x:"<<x<<endl;
        cout<<"value of y:"<<y<<endl;
    }
};
class abc : public xyz
{
    int a,b;
public:
    void getdata()
    {
        cout<<"enter a and b:"<<endl;
        cin>>a>>b;
    }
    void putdata()
    {
        cout<<"Data of class abc:"<<endl;
        cout<<"value of a:"<<a<<endl;
        cout<<"value of b:"<<b<<endl;
    }
};
int main()
{
    xyz *x;
    abc b;
    x=&b;
    x->getdata();
    x->putdata();

    xyz x1;
    x=&x1;
    x->getdata();
    x->putdata();
}
