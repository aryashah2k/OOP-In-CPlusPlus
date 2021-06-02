#include<iostream>
using namespace std;
void print_max(int arr[5]);
void print_min(int arr[5]);
int main()
{
    int arr[5]={45,56,25,15,10};
    print_max(arr);
    print_min(arr);
}
void print_max(int arr[5])
{
    int maximum=arr[0];
    for (int i=0;i<5;i++)
    {
        if(maximum<arr[i])
        {
            maximum=arr[i];
        }
    }
    cout<<"The maximum element in the array is:"<<maximum<<endl;
}
void print_min(int arr[5])
{
    int minimum=arr[0];
    for(int i=0;i<5;i++)
    {
        if (minimum>arr[i])
        {
            minimum=arr[i];
        }
    }
    cout<<"The minimum element in the array is:"<<minimum<<endl;
}
