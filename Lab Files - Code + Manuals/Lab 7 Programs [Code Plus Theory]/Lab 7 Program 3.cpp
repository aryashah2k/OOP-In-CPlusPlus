#include<iostream>
using namespace std;
//operator overloading using friend function
class complex
{
    double real,imag;
public:
    complex()
    {

    }
    complex(double r, double i)
    {
        real=r;
        imag=i;
    }
    friend complex operator+(complex ,complex);
    friend complex operator*(complex, complex);

    void printcomplex()
    {
        cout<<real<<"+i"<<imag<<endl;
    }
};
complex operator +(complex c1,complex c2)
{
    complex c3;
    c3.real=c1.real+c2.real;
    c3.imag=c1.imag+c2.imag;
    return c3;
}
complex operator *(complex c1,complex c2)
{
    complex c3;
    c1.real=c1.real*c2.real+c1.imag*c2.imag;
    c1.imag=c1.real*c2.imag+c1.imag*c2.imag;
    return c3;
}
int main()
{
    complex a(2.3,3.4);
    complex b(2.8,3.6);
    complex c,d;
    c=a+b;//invoking + operator function
    c.printcomplex();
    d=c*b;
    d.printcomplex();
}
