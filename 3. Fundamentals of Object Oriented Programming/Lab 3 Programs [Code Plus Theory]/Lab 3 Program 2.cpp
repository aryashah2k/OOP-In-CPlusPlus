#include<iostream>
using namespace std;

void convert_inch_to_yard_feet()
{
    float* p=NULL;
    p=new float;
    if(!p)
    {
        cout<<"Memory allocation failed\n";
    }
    else
    {
        float inch_yard;
        cout<<"Enter the unit in Inches to be converted in Yards:\n";
        cin>>inch_yard;
        *p = inch_yard/36;
        cout<<"The entered unit in Yards is:"<<*p<<endl;
    }
    float* q=NULL;
    q=new float;
    if(!q)
    {
        cout<<"Memory allocation failed\n";
    }
    else
    {
        float inch_feet;
        cout<<"Enter the unit in Inches to be converted in Feet:\n";
        cin>>inch_feet;
        *q= inch_feet/12;
        cout<<"The entered unit in Feet is :"<<*q<<endl;
    }

    float* r=NULL;
    r= new float;
    if(!r)
    {
        cout<<"Memory allocation failed\n";
    }
    else
    {
        float yard_feet;
        cout<<"Enter the unit in yards to be converted into Feet:\n";
        cin>>yard_feet;
        *r=yard_feet/3;
        cout<<"The entered unit in Feet is:"<<*r<<endl;
    }

    delete r;

}
int main()
{
    convert_inch_to_yard_feet();
}
