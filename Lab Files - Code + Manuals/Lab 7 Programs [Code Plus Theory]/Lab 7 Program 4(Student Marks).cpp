#include<iostream>
using namespace std;
class External1;
class Internal1
{
  int math;
  int oop;
  int se;
  int ds;
  public:
      Internal1()
      {

      }
      Internal1(int a, int b, int c, int d)
      {
          math=a;
          oop=b;
          se=c;
          ds=d;
      }
      friend void operator +(Internal1 x, External1 y);
};
class External1
{
     int math;
     int oop;
     int se;
     int ds;
 public:
    External1()
    {

    }
    External1(int a, int b, int c, int d)
    {
          math=a;
          oop=b;
          se=c;
          ds=d;
    }
    friend void operator +(Internal1 x, External1 y);

};
void operator +(Internal1 x, External1 y)
{
    cout<<"Combined Marks for Maths:"<<x.math+y.math<<endl;
    if(x.math+y.math>=50)
    {
        cout<<"Passed"<<endl;
    }
    else
        cout<<"Failed"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"Combined Marks for OOP:"<<x.oop+y.oop<<endl;
    if(x.oop+y.oop>=50)
    {
        cout<<"Passed"<<endl;
    }
    else
        cout<<"Failed"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"Combined Marks for SE:"<<x.se+y.se<<endl;
    if(x.se+y.se>=50)
    {
        cout<<"Passed"<<endl;
    }
    else
        cout<<"Failed"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"Combined Marks for DS:"<<x.ds+y.ds<<endl;
    if(x.ds+y.ds>=50)
    {
        cout<<"Passed"<<endl;
    }
    else
        cout<<"Failed"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"Total Marks (out of 400):"<<x.math+x.oop+x.se+x.ds+y.math+y.oop+y.se+y.ds<<endl;
}
int main()
{
    Internal1 x(45,42,40,50);
    External1 y(42,35,42,50);
    x+y;
}

//the  + operator function will be defined as friend in both classes and will be written outside the two classes independent and
//will have to pass the object of both classes as parameters.

