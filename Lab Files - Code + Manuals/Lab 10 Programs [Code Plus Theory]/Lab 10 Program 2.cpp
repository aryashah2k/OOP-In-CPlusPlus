#include<iostream>
#include<string.h>
using namespace std;
class car
{
public:
  char make[20];
  char model[20];
  int price;
  char seat_number;
    virtual void initialize()
      {
          cout<<"Enter the Make of the Car:"<<endl;
          cin>>make;
          cout<<"Enter Model of the Car:"<<endl;
          cin>>model;
          cout<<"Enter Total price of the car:"<<endl;
          cin>>price;
          cout<<"Enter Number of seats in the car:"<<endl;
          cin>>seat_number;
      }
      virtual void display()
      {
          cout<<"----------Car Details----------"<<endl;
          cout<<"Make:"<<make<<endl;
          cout<<"Model:"<<model<<endl;
          cout<<"Price:"<<price<<endl;
          cout<<"Number of Seats:"<<seat_number<<endl;
      }
};
class type : public car
{
public:

    char car_type[20];
    void initialize()
    {

        if(seat_number=4)
        {
            strcpy(car_type,"Hatchback");
            //cout<<"The car type is Hatchback"<<endl;
        }
        else if(seat_number=5)
        {
            strcpy(car_type,"Sedan");
            //cout<<"The car type is Sedan"<<endl;
        }

        else
        {
            strcpy(car_type,"SUV");

        }

    }
    void display()
    {

        cout<<"The car type is:"<<car_type<<endl;

    }
};
int main()
{
    car *c;
    car c1;
    c=&c1;
    c->initialize();
    c->display();
    type a;
    c=&a;
    c->initialize();
    c->display();



}
