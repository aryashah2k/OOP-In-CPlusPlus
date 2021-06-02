#include<iostream>
#include<string.h>
using namespace std;
class bank_account
{
protected:
    char customer_name[50];
    char address[150];
    int age;
    double saving_acc_no;
    long balance;
public:
    void open_account()
    {

    }
    void withdraw()
    {

    }
    void deposit()
    {

    }
    void display()
    {

    }
};
class life_insurance:public virtual bank_account
{

};
class car_insurance:public virtual bank_account
{

};
class claim:public life_insurance,public car_insurance
{

};
int main()
{

}
