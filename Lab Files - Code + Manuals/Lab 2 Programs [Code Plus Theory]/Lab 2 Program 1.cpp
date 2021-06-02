#include <iostream>
using namespace std;

int sum(int, int);
float sum(float, float);
float sum(int, float);
double sum(double, double);
long sum(long, long);
short sum(short, short);
char sum(char, char);
int main(){
   int num1, num2, x;
   float num3, num4, y;
   double c,d;
   long e,f;
   short j,k;
   char l,m;
   cout<<"Enter two integer numbers: ";
   cin>>num1>>num2;
   cout<<"Result: "<<sum(num1, num2)<< endl;
   cout<<"Enter two float numbers: ";
   cin>>num3>>num4;
   cout<<"Result: " <<sum(num3, num4)<< endl;
   cout<<"Enter one int and one float number: ";
   cin>>x>>y;
   cout<<"Result: " <<sum(x, y)<< endl;
   cout<<"Enter two numbers in double format:";
   cin>>c>>d;
   cout<<"Result:"<<sum(c, d)<<endl;
   cout<<"Enter two numbers in long format:";
   cin>>e>>f;
   cout<<"Result:"<<sum(e,f)<<endl;
   cout<<"Enter two numbers in short format:";
   cin>>j>>k;
   cout<<"Result:"<<sum(j, k)<<endl;
   cout<<"Enter two numbers in char format:";
   cin>>l>>m;
   cout<<"Result:"<<sum(l, m)<<endl;
   return 0;
}
int sum(int a, int b)
{
   return a+b;
}
float sum(float a, float b)
{
   return a+b;
}

float sum(int a, float b)
{
   return a+b;
}
double sum(double a, double b)
{
    return a+b;
}
long sum(long a, long b)
{
   return a+b;
}
short sum(short a, short b)
{
    return a+b;
}
char sum(char a, char b)
{
    return a+b;
}
