#include<iostream>
using namespace std;
class employee
{
    char name[30];
    int id;
    char dept[15];
    float base_salary;
    float DA;
    float HRA;
    float TA;

public:
    employee();
    employee(employee &obj);
    employee(char[],int,char[],int,float,float,float);

};
// Using Default Constructor Logic.
employee::employee()
{
    cout<<"Enter Name:"<<endl;
    cin>>name;
    cout<<"Enter ID:"<<endl;
    cin>>id;
    cout<<"Enter Dept:"<<endl;
    cin>>dept;
    cout<<"Enter Base Salary:"<<endl;
    cin>>base_salary;
    int total;
    DA=0.5*base_salary;
    cout<<"Employee Dearness Allowance is:"<<DA<<endl;
    HRA=0.3*base_salary;
    cout<<"Employee HRA is:"<<HRA<<endl;
    TA=0.1*base_salary;
    cout<<"Employee TA is:"<<endl;
    cout<<"The Total Gross Employee salary is:"<<TA<<endl;
    total=DA+HRA+TA;
    cout<<total<<endl;;

}
employee::employee(employee &obj)
{
    cout<<"Enter Name:"<<endl;
    cin>>name;
    cout<<"Enter ID:"<<endl;
    cin>>id;
    cout<<"Enter Dept:"<<endl;
    cin>>dept;
    cout<<"Enter Base Salary:"<<endl;
    cin>>base_salary;
    int total;
    obj.DA=0.5*obj.base_salary;
    cout<<"Employee Dearness Allowance is:"<<obj.DA<<endl;
    obj.HRA=0.3*obj.base_salary;
    cout<<"Employee HRA is:"<<obj.HRA<<endl;
    obj.TA=0.1*obj.base_salary;
    cout<<"Employee TA is:"<<endl;
    cout<<"The Total Gross Employee salary is:"<<obj.TA<<endl;
    total=obj.DA+obj.HRA+obj.TA;
    cout<<total<<endl;

}

int main()
{
    employee e;
    employee e1(e);
    cout<<"--------------------"<<endl;
    employee e2;
    employee e3(e);
    employee e4=e1;//Use of Copy Constructor.


}
