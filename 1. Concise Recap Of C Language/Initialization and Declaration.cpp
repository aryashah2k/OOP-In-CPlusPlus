#include<stdio.h>
#include<conio.h>


int a  = 20; //a defined before the main function and its usage in main(), not need to declare it
int main()
{

	printf("%d",a); //prints 20
	printf("%d",b); //error - b not declared, need to use extern b and declare b;
	return 0;
}

int b =10;//b is used frirst in the main function and then it is defiend afterwards, error 

