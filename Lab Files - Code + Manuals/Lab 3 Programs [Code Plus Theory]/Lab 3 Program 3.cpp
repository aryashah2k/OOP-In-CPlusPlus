#include<iostream>
using namespace std;

int volume(int);
float volume(float);
float volume(int,int);
float volume(float, float);

int main()
{
int side_length;
float radius;
float radius_cone,height;
float radius_cylinder,height_cylinder;
cout<<"Enter the side length of cube:";
cin>>side_length;
cout<<"The volume of cube is:"<<volume(side_length)<<endl;
cout<<"Enter the radius of the sphere:";
cin>>radius;
cout<<"The volume of the sphere is:"<<volume(radius)<<endl;
cout<<"Enter the radius and height of the cone:";
cin>>radius_cone>>height;
cout<<"The volume of the cone is"<<volume(radius_cone,height)<<endl;
cout<<"Enter the radius and height of the cylinder:";
cin>>radius_cylinder>>height_cylinder;
cout<<"The volume of the cylinder is:"<<volume(radius_cylinder,height_cylinder)<<endl;

}

inline int volume(int side_length)
{
float A =  side_length*side_length*side_length;
return A;
}

inline float volume(float radius)
{
float A = 1.33*3.14*(radius*radius*radius);
return A;
}

inline float volume(int radius_cone, int height)
{
float A = 0.33*3.14*(radius_cone*radius_cone)*height;
return A;
}
inline float volume(float radius_cylinder, float height_cylinder)
{
    float A= 3.14*(radius_cylinder*radius_cylinder)*height_cylinder;
    return A;
}
