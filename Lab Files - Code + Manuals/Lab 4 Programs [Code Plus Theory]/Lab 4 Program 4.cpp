#include<iostream>
#include<string.h>
using namespace std;

class cricket_team
{

private:
    char player_name[40];
    char region[20];
    float batting_avg;
    float bowling_avg;

public:
    void readData()
    {
        cout<<"Enter the Player name:"<<endl;
        cin>>player_name;
        cout<<"Enter the Region:"<<endl;
        cin>>region;
        cout<<"Enter the Batting average:"<<endl;
        cin>>batting_avg;
        cout<<"Enter the Bowling average:"<<endl;
        cin>>bowling_avg;
    }

     void sortList(cricket_team c1[])
    {
        cricket_team temp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<2;j++)
            {
                if(c1[j].batting_avg<c1[j+1].batting_avg&&c1[j].bowling_avg>c1[j+1].bowling_avg)
                {
                    temp=c1[j];
                    c1[j]=c1[j+1];
                    c1[j+1]=temp;
                }
            }
        }
        c1[0].displayList(c1);
    }

    void generateList(cricket_team c1[])
    {
        int i;
        int flag=0;
        for(i=0;i<3;i++)
        {
            if(c1[i].batting_avg>30&&c1[i].bowling_avg<25)
            {
                flag=1;
                cout<<c1[i].player_name<<endl;

            }
        }
        if(flag==0)
            cout<<"Error"<<endl;
    }



    void displayList(cricket_team c1[])
    {
        for(int i=0;i<3;i++)
        {   cout<<"-----Player List-----"<<endl;
            cout<<"Player Name:"<<c1[i].player_name<<endl;
            cout<<"Player Region:"<<c1[i].region<<endl;
            cout<<"Batting Average:"<<c1[i].batting_avg<<endl;
            cout<<"Bowling Average:"<<c1[i].bowling_avg<<endl;
        }
    }
};

int main()
{   int i=0;
    cricket_team c1[3];
    cout<<"Enter the team details:"<<endl;
    for(i=0;i<3;i++)
    {
        c1[i].readData();
    }
    cout<<"The Qualified Players are:"<<endl;
    c1[0].generateList(c1);


    c1[0].sortList(c1);


    return 0;
}
