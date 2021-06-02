#include<iostream>
using namespace std;
//CONSTRUCTOR Overloading
class add
{
    int m,n ;
    public:
    add ( )
    {
        m = 0 ;
        n = 0 ;
    }
    add (int a, int b)
    {
        m = a ;
        n = b ;
    }
    add (add &obj)
    {
        m = obj.m ;
        n = obj.n ;
    }
    print()
    {
        cout<<m+n;
    }
    print(int a, int b)
    {
        cout<<m+n;
    }
    print(add &obj)
    {
        cout<<m+n;
    }
};
int main()
{
    add o1;
    add o2(10,20);
    add obj(o2);
    o1.print();
    o2.print();
    obj.print();
}

