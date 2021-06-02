#include<iostream>
#include<stdio.h>
using namespace std;

class All_Rounder
{
    protected:
    char play_name[40],play_reg[20];
    float bat_avg,ball_avg;

    public:
        void readData()
        {
            cout<<"Enter your Name : ";
            cin>>play_name;
            cout<<"Enter the Region you Belong to : ";
            cin>>play_reg;
            cout<<"Enter your Batting Average : ";
            cin>>bat_avg;
            cout<<"Enter your Balling Average : ";
            cin>>ball_avg;
        }

        void generateList(All_Rounder *s)
        {
            All_Rounder s2[5];
            int j=-1;

            for(int i=0;i<5;i++)
            {
                if((s[i].bat_avg>=30)&&(s[i].ball_avg<=25))
                {
                    s2[++j]=s[i];
                }
            }

            cout<<"\n\nAll-Rounder List : \n";
            s2[0].displayList(s2,j+1);

        }

        void sortList(All_Rounder *s)
        {
            All_Rounder s3[5],s4[5],s5;

            for(int i=0;i<5;i++)
            {
                s3[i]=s[i];
                s4[i]=s[i];
            }

            for(int i=0;i<(5-1);i++)
            {
                for(int j=0;j<(5-i-1);j++)
                {
                    if(s3[j].bat_avg<s3[j+1].bat_avg)
                    {
                        s5=s3[j];
                        s3[j]=s3[j+1];
                        s3[j+1]=s5;
                    }
                }

                for(int j=0;j<(5-i-1);j++)
                {
                    if(s4[j].ball_avg>s4[j+1].ball_avg)
                    {
                        s5=s4[j];
                        s4[j]=s4[j+1];
                        s4[j+1]=s5;
                    }
                }
            }

            cout<<"\nBatting Average List : \n";
            s3[0].displayList(s3,5);

            cout<<"\n\nBalling Average List : \n";
            s4[0].displayList(s4,5);

            s3[0].generateList(s3);
        }

        void displayList(All_Rounder *s,int n)
        {
            for(int i=0;i<n;i++)
            {
                cout<<"\nName : "<<s[i].play_name;
                cout<<"\t\tRegion : "<<s[i].play_reg;
                cout<<"\t\tBatting Average : "<<s[i].bat_avg;
                cout<<"\t\tBalling Average : "<<s[i].ball_avg<<"\n";
            }
        }
};

class Batsman : public All_Rounder
{
public:
        void generateList1(Batsman *b)
        {
            Batsman b2[5];
            int j=-1;

            for(int i=0;i<5;i++)
            {
                if((b[i].bat_avg>=40)&&(b[i].ball_avg==0))
                {
                    b2[++j]=b[i];
                }
            }

            cout<<"\n\nSeparate Batsman List : \n";
            b2[0].displayList(b2,j+1);
        }

        void displayList(Batsman *b,int n)
        {
            for(int i=0;i<n;i++)
            {
                cout<<"\nName : "<<b[i].play_name;
                cout<<"\t\tRegion : "<<b[i].play_reg;
                cout<<"\t\tBatting Average : "<<b[i].bat_avg;
                cout<<"\t\tBalling Average : "<<b[i].ball_avg<<"\n";
            }
        }
};

int main()
{
    Batsman b1[10];

    for(int i=0;i<5;i++)
    {
        cout<<"Enter Details of Player "<<i+1<<" : \n";
        b1[i].readData();
        cout<<"\n";
    }

    b1[0].sortList(b1);
    b1[0].generateList1(b1);
}

