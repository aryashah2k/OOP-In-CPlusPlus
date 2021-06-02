#include<iostream>
#include<string.h>
using namespace std;
class consumer
{
    char consumer_name[50];
    int consumer_no;
    char consumer_type[15];
    long int current_reading;
    long int last_reading;
    double amount_pay;
    char month[20];
public:
    friend ostream &operator<<(ostream &output, consumer &c );
    friend istream &operator>>(istream &input, consumer &c);
};
ostream &operator<<(ostream &output, consumer &c )
{
    cout<<"The consumer number is:"<<c.consumer_no<<endl;
    cout<<"The consumer name is:"<<c.consumer_name<<endl;
    cout<<"The consumer type is:"<<c.consumer_type<<endl;
    {
       if(strcmp(c.consumer_type,"NonCommercial")==0)
       {
            if (c.current_reading<=100)
                c.amount_pay=3*100;
            else
                c.amount_pay=3*100+(c.current_reading-c.last_reading)*5;

       }
       else
       {

           if(c.current_reading<=200)
            c.amount_pay=5*200;
           else
            c.amount_pay=5*200+(c.current_reading-c.last_reading)*10;
       }

    }
    cout<<"The Bill is:"<<c.amount_pay<<endl;
}
istream &operator>>(istream &input, consumer &c)
{
    cout<<"----------------------"<<endl;
    cout<<"Enter consumer number:"<<endl;
    cin>>c.consumer_no;
    cout<<"Enter consumer name:"<<endl;
    cin>>c.consumer_name;
    cout<<"Enter consumer type:"<<endl;
    cin>>c.consumer_type;
    cout<<"Enter current meter reading:"<<endl;
    cin>>c.current_reading;
    cout<<"Enter last meter reading:"<<endl;
    cin>>c.last_reading;
    cout<<"Enter bill month:"<<endl;
    cin>>c.month;
    cout<<"----------------------"<<endl;
}
int main()
{
    consumer c1;
    for(int i=0;i<=3;i++)
    {
       cin>>c1;
       cout<<c1;

    }
}
