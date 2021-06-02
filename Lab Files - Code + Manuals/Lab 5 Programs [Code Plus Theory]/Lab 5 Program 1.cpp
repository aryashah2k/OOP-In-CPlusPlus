#include<iostream>
using namespace std;
class External1;
class Internal1
{
    int math;
    int oop;
    int se;
    int ds;
    int add;
public:
    void read()
    {

        cout<<"-----Enter Internal Marks:-----"<<endl;
        cout<<"Enter Maths Internals:"<<endl;
        cin>>math;
        cout<<"Enter OOP Internals:"<<endl;
        cin>>oop;
        cout<<"Enter SE Internals:"<<endl;
        cin>>se;
        cout<<"Enter DS Internals:"<<endl;
        cin>>ds;

        add=math+oop+se+ds;
        cout<<"Total in Internals="<<add<<endl;
    }

    friend int sum(Internal1,External1);
};
class External1
{
    int math;
    int oop;
    int se;
    int ds;
    int add;
public:
    void read()
    {

        cout<<"-----Enter External Marks:-----"<<endl;
        cout<<"Enter Maths Externals:"<<endl;
        cin>>math;
        cout<<"Enter OOP Externals:"<<endl;
        cin>>oop;
        cout<<"Enter SE Externals:"<<endl;
        cin>>se;
        cout<<"Enter DS Externals:"<<endl;
        cin>>ds;
        add=math+oop+se+ds;
        cout<<"Total in Externals="<<add<<endl;

    }
    friend int sum(Internal1,External1);
};
int sum(Internal1 a, External1 b)
{
    if(a.math+b.math<50)
    {
        cout<<"Math FAILED"<<endl;
    }
    else
    {
        cout<<"Math PASSED"<<endl;
    }
    if(a.oop+b.oop<50)
    {
        cout<<"OOP FAILED"<<endl;
    }
    else
    {
        cout<<"OOP PASSED"<<endl;
    }
    if(a.se+b.se<50)
    {
        cout<<"SE FAILED"<<endl;
    }
    else
    {
        cout<<"SE PASSED"<<endl;
    }
    if(a.ds+b.ds<50)
    {
        cout<<"DS FAILED"<<endl;
    }
    else
    {
        cout<<"DS PASSED"<<endl;
    }
    cout<<"Combined out of 400 Marks is:"<<a.add+b.add<<endl;
}
int main()
{
    int t;
    Internal1 x;
    External1 y;
    x.read();
    y.read();
    //cout<<"The Total Marks are:"<<sum(x,y)<<endl;
    t=sum(x,y);
    if(t>=200)
    {
        cout<<"-----OVERALL-----"<<endl;
        cout<<"The student has PASSED."<<endl;
    }
    else
    {
        cout<<"The student has FAILED."<<endl;
    }



}
