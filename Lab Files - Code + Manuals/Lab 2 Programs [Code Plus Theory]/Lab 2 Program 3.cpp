#include<iostream>
using namespace std;
void exchange(int*, int*);
int main()
{
        int x,y;
        cout<<"Enter first number :";
        cin>>x;
        cout<<"Enter second number:";
        cin>>y;
        cout<<"Before Swapping : x = "<<x<<" y = "<<y<<endl;
        exchange(&x,&y);
        cout<<"After Swapping : x = "<<x<<" y = "<<y<<endl;
}

void exchange(int *a, int *b)
{
        int t;
        t = *a;
        *a = *b;
        *b = t;
}
