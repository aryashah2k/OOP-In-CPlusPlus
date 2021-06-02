#include<iostream>
using namespace std;
// COPY Constructor

class add
{
    int m,n;
public:
    add()
    {
        m=0;
        n=0;
    }
    add (int a, int b)
    {
        m=a;
        n=b;
    }
    add(add &obj)
    {
        m=obj.m;
        n=obj.n;
    }
    print()
    {
        cout<<m+n;
    }

};
int main()
{
    int m1,n1;
    cin>>m1;
    cin>>n1;
    add A(m1,n1);
    add A1(A);
    add A2=A1;
    A.print();
    A1.print();
    A2.print();
}
