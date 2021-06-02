#include<iostream>
using namespace std;
//unary operator overloading
class unaryop//prefix
{
    int a,b,c;
public:
    unaryop()
    {

    }
    unaryop(int a1,int b1, int c1)
    {
        a=a1;
        b=b1;
        c=c1;
    }
    void operator --(int)
    {
        a--;
        b--;
        c--;
    }
    void display()
    {
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
};
class unaryop1//post fix
{
        int a,b,c;
public:
    unaryop1()
    {

    }
    unaryop1(int a1,int b1, int c1)
    {
        a=a1;
        b=b1;
        c=c1;
    }
    void operator --()
    {
        --a;
        --b;
        --c;
    }
    void display()
    {
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
};
int main()
{
    cout<<"------In Prefixed------"<<endl;
    unaryop u(2,3,4);
    u--;
    //unaryop u1;
    //u1=u--;
    //u1.display();
    u.display();
    cout<<"------Now in Post Fixed-----"<<endl;
    unaryop1 v(2,3,4);
    --v;
    //unaryop1 v1;
    //v1=--v;
    //v1.display();
    v.display();
}
