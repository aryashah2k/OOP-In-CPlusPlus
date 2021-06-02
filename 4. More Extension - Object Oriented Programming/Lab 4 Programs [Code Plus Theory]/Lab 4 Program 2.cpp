#include<iostream>
using namespace std;

class Simple
    {
        int num1;
        int num2;
        int num3;
        int sum;
    public:
        void ReadData()
        {
            cout<<"Enter 3 Numbers:";
            cin>>num1>>num2>>num3;
        }

        void addData()
        {
            sum=num1+num2+num3;
        }

        void displayData()
        {
            cout<<"The three numbers were:"<<num1<<num2<<num3<<endl;
            cout<<"The sum is:"<<sum<<endl;
        }
    };

    int main()
    {
        Simple s;
        s.ReadData();
        s.addData();
        s.displayData();
    }
