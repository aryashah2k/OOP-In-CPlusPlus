#include<iostream>
#include<string.h>
using namespace std;
// DYNAMIC Constructor

class student
{
    char *name;
    int roll;
public:
    student()
    {

    }
    student(char n[], int roll);
    void display();
};
void student::display()
{
    cout<<name<<" "<<roll;
}
student::student(char n[],int roll_no)
{
    name=new char[40];
    strcpy(name,n);
    roll=roll_no;
}
int main()
{
    student s;
    student s1("xyz",10);
    s=s1;
    s1.display();
    s.display();
}
