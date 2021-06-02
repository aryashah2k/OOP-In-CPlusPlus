#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

class Bank_Account
{
    protected : char cust_name[40],cust_add[80];
                long int sav_acc_no;
                double bal,amt;

    public : void Open_Acc()
             {
                 cout<<"Enter Customer's Name : ";
                 gets(cust_name);
                 cout<<"Enter Customer's Address : ";
                 gets(cust_add);
                 cout<<"Enter Customer's Savings Account No. : ";
                 cin>>sav_acc_no;
                 cout<<"Enter Customer's Account Opening Balance : ";
                 cin>>bal;
             }

             void Withdraw()
             {
                 cout<<"Enter Amount to be Withdrawn : ";
                 cin>>amt;
                 bal -= amt;
             }

             void Deposit()
             {
                 cout<<"Enter Amount to be Deposited : ";
                 cin>>amt;
                 bal += amt;
             }

             void Display()
             {
                 cout<<"\nSavings Account Details : \n";
                 cout<<"\nCustomer's Name : "<<cust_name;
                 cout<<"\nAddress : "<<cust_add;
                 cout<<"\nSavings Account No. : "<<sav_acc_no;
                 cout<<"\nAccount Balance : "<<bal<<"\n";
             }
};

class Home_Loan : public Bank_Account
{
    protected : long int home_loan_acc_no;
                float loan_AMT,EMI,OUT,P,R,MON_INT,MON_PR;
                int N,Y;

    public : void Open_Acc_1()
             {
                 cout<<"\n\nEnter Customer's Home Loan Account No. : ";
                 cin>>home_loan_acc_no;
                 cout<<"Enter Loan Amount : ";
                 cin>>loan_AMT;
                 cout<<"Enter Rate of Interest Applicable : ";
                 cin>>R;
                 cout<<"Enter Tenure of Loan Repayment (in Years) : ";
                 cin>>Y;
             }

             void Deduct_EMI()
             {
                 P = loan_AMT;
                 R= (R/1200);
                 N = Y*12;

                 EMI = ( P * R * (pow((1 + R),N)/(pow((1 + R),N) - 1)));
                 bal -= EMI;
                 cout<<"\nEMI per Month : "<<EMI;
                 cout<<"\nAccount Balance after Payment of 1st Monthly EMI of Home Loan : "<<bal<<"\n";
             }

             void Display_Outstanding()
             {
                 cout<<"\n\n\nHome Loan Details : \n";
                 cout<<"\nHome Loan Account No. : "<<home_loan_acc_no;
                 cout<<"\nLoan Amount : "<<loan_AMT<<"\n";
                 cout<<"\nOn EMI Paid Monthly : \n";

                 for(int i=0;i<Y;i++)
                 {
                     for(int j=0;j<12;j++)
                     {
                         MON_INT = (R*P);
                         MON_PR = (EMI- MON_INT);

                         if((i==Y-1)&&(j==11))
                         {
                             OUT = 0;
                         }
                         else
                         {
                             OUT = (P - MON_PR);
                         }
                         P = OUT;
                     }
                     P=OUT;
                     cout<<"\nOutstanding Amount after "<<i+1<<" Year : "<<OUT;
                 }
             cout<<"\n";
             }
};

class Car_Loan : public Home_Loan
{
    protected : long int car_loan_acc_no;
                float loan_amt,emi,out,p,r,mon_int,mon_pr;
                int n,y;

    public : void Open_Acc_2()
             {
                 cout<<"\n\nEnter Customer's Car Loan Account No. : ";
                 cin>>car_loan_acc_no;
                 cout<<"Enter Loan Amount : ";
                 cin>>loan_amt;
                 cout<<"Enter Rate of Interest Applicable : ";
                 cin>>r;
                 cout<<"Enter Tenure of Loan Repayment (in Years) : ";
                 cin>>y;
             }

             void Deduct_emi()
             {
                 p = loan_amt;
                 r = (r/1200);
                 n = y*12;
                 emi = ( p * r * (pow((1 + r),n)/(pow((1 + r),n) - 1)));
                 bal -= emi;
                 cout<<"\nEMI per Month : "<<emi;
                 cout<<"\nAccount Balance after Payment of 1st Monthly EMI of Car Loan : "<<bal<<"\n";
             }

             void Display_outstanding()
             {
                 cout<<"\n\n\nCar Loan Details : \n";
                 cout<<"\nCar Loan Account No. : "<<car_loan_acc_no;
                 cout<<"\nLoan Amount : "<<loan_amt<<"\n";
                 cout<<"\nOn EMI Paid Monthly : \n";

                 for(int i=0;i<y;i++)
                 {
                     for(int j=0;j<12;j++)
                     {
                         mon_int = (r * p);
                         mon_pr = (emi - mon_int);

                         if((i==y-1)&&(j==11))
                         {
                             out = 0;
                         }
                         else
                         {
                             out = p - mon_pr;
                         }
                         p = out;
                     }
                     p = out;
                     cout<<"\nOutstanding Amount after "<<i+1<<" Year : "<<out;
                 }
             cout<<"\n";
             }
};

int main()
{
    Car_Loan c;
    c.Open_Acc();
    c.Deposit();
    c.Withdraw();
    c.Display();
    c.Open_Acc_1();
    cout<<"\nDeduction of Home Loan EMI :";
    c.Deduct_EMI();
    c.Display_Outstanding();
    c.Open_Acc_2();
    cout<<"\nDeduction of Car Loan EMI :";
    c.Deduct_emi();
    c.Display_outstanding();
}
