#include<iostream>
using namespace std;

class complex
{
    double real, imag;
public:
    complex()
    {

    }
    complex(double r, double i)
    {
        real=r;
        imag=i;
    }
    complex operator+(complex a);
    complex operator*(complex a);

    void printcomplex()
    {
        cout<<real<<"+i"<<imag;
    }
};
complex complex::operator + (complex c)
{
    complex c1;
    c1.real=real+c.real;
    c1.imag=imag+c.imag;
    return c1;
}
complex complex::operator*(complex c)
{
    complex c1;
    c1.real=real*c.real+imag*c.imag;
    c1.imag=real*c.imag+imag*c.imag;
    return c1;
}

int main()
{
    complex a(2.3,3.4);
    complex b(2.8,3.6);
    complex c,d;
    c=a+b;//invoking operator function +
    c.printcomplex();
    d=c*b;//invoking operator function *
    d.printcomplex();
}
