#include<iostream>
using namespace std;
class sales;
class Employee
{
    char employee_name[50];
    int employee_id;
    char employee_dept[30];
    int monthly_salary;

public:
    void read_data()
    {
        cout<<"Enter Employee Name:"<<endl;
        cin>>employee_name;
        cout<<"Enter Employee ID:"<<endl;
        cin>>employee_id;
        cout<<"Enter Employee Department:"<<endl;
        cin>>employee_dept;
        cout<<"Enter Employee Monthly Salary:"<<endl;
        cin>>monthly_salary;
    }
    void display_data()
    {
        cout<<"-----EMPLOYEE DETAILS:-----"<<endl;
        cout<<"The Employee name is:"<<employee_name<<endl;
        cout<<"The employee ID is:"<<employee_id<<endl;
        cout<<"The Employee Dept. is:"<<employee_dept<<endl;
        cout<<"The Monthly salary of the Employee is:"<<monthly_salary<<endl;

    }
    friend class sales;
};
class sales
{
    int sales_in_month;
    int incentive_gain;
    char performance_indicator[15];

public:
    void read_data()
    {
        cout<<"Enter the Employee's Monthly Sales:"<<endl;
        cin>>sales_in_month;
    }
    void calculate_incentive(Employee e)
    {
        if(sales_in_month>=50&&sales_in_month<=100)
        {
            e.monthly_salary+=0.1*e.monthly_salary;
            cout<<"Salary with incentive is:"<<e.monthly_salary<<endl;
        }
        else if(sales_in_month>100&&sales_in_month<=150)
        {
            e.monthly_salary+=0.2*e.monthly_salary;
            cout<<"Salary with incentive is:"<<e.monthly_salary<<endl;
        }
        else
        {
            e.monthly_salary+=0.3*e.monthly_salary;
            cout<<"Salary with incentive is:"<<e.monthly_salary<<endl;
        }
    }
    void display_performance(Employee e)
    {
        if (sales_in_month<50)
        {
            cout<<"Employee Performance= POOR"<<endl;
        }
        else if(sales_in_month>=50&&sales_in_month<=100)
        {
            cout<<"Employee Performance= SATISFACTORY"<<endl;
        }
        else if(sales_in_month>100&&sales_in_month<=150)
        {
            cout<<"Employee Performance= GOOD"<<endl;
        }
        else
        {
            cout<<"Employee Performance= EXCELLENT"<<endl;
        }
    }
};
int main()
{
    Employee e1;
    sales s1;
    e1.read_data();
    e1.display_data();
    s1.read_data();
    s1.calculate_incentive(e1);
    s1.display_performance(e1);


}
