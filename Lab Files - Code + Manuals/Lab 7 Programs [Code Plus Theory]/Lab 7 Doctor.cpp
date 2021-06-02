#include<iostream>
#include<string.h>
using namespace std;
class doctor
{
    char doctor_name[20];
    char doctor_area[20];
public:
    int readData()
    {
        cout<<"Enter Doctor Name:"<<endl;
        cin>>doctor_name;
        cout<<"Enter Doctor Area:"<<endl;
        cin>>doctor_area;
    }
    int printData()
    {
        cout<<"\n"<<"------------------------------"<<endl;
        cout<<"Name of Doctor:"<<doctor_name<<" "<<"Area:"<<doctor_area<<"\n";
        cout<<"------------------------------"<<endl;
    }
    int operator <(doctor d)
    {
      if(strcmp(doctor_name,d.doctor_name)<0)
        return 1;
      else
        return 0;
    }

};
int main()
{
    doctor d[3];
    for(int i=0;i<3;i++)
    {
        d[i].readData();
    }
     doctor temp;
        for(int i=0;i<3;i++)
        {
            for(int j=i+1;j<3;j++)
            {
                if(d[j]<d[i])
                {
                    temp=d[i];
                    d[i]=d[j];
                    d[j]=temp;
                }
            }
        }
        cout<<"The Complete List(Sorted Alphabetically:";
        for(int i=0;i<3;i++)
        {
            d[i].printData();
        }

}

