#include<iostream>
#include<string.h>
using namespace std;
struct Lib
{
	char name[30];
	char auth[30];
	float price;
	int Nocpy;

	void readBooks()
	{
    cout<<"Book name :";
	cin>>name;
	cout<<"Book author :";
	cin>>auth;
	cout<<"Book price :";
	cin>>price;
	cout<<"No. of Copies  :";
	cin>>Nocpy;

	}

	void printBooks()
	{
	cout<<"Book Name :"<<name<<endl;
	cout<<"Book Author :"<<auth<<endl;
	cout<<"Book Price :"<<price<<endl;
	cout<<"No. of Copies :"<<Nocpy<<endl;
	}

	int searchBooks_byName(char *keyBook)
	{
	if(strcmp(keyBook,name)==0)
	return 1;
	else
	return 0;
	}

	int searchBooks_byAuth(char *keyAuth)
	{
	if(strcmp(keyAuth,auth)==0)
	return 1;
	else
	return 0;
	}

	void sort_byBook(Lib L[100])
	{
	    int i, j; Lib L1;
	    for(i=0;i<3;i++)
        {
            for(j=i+1;j<3;j++)
            {
                if(strcmp(L[i].name,L[j].name)>0)
                {
                    L1=L[i];
                    L[i]=L[j];
                    L[j]=L1;
                }
            }
        }
	}
};

int main()
{	Lib L[100];
    int i;
    cout<<"Enter Books Details"<<endl;
	for(i=0;i<3;i++)
	L[i].readBooks();

	cout<<endl<<"Books Details are : "<<endl;
	for(i=0;i<3;i++)
	L[i].printBooks();

    char keyBook[30];
	cout<<"Enter book to be searched"<<endl;
	cin>>keyBook;
	for(i=0;i<3;i++)
	{
	if(L[i].searchBooks_byName(keyBook)==1)
	{
	cout<<"Book found"<<endl;
	L[i].printBooks();
	break;
	}
	}
	if(i==3)
	cout<<"Book is not available";

	char keyAuth[30];
	cout<<"Enter author name to be searched"<<endl;
	cin>>keyAuth;
	for(i=0;i<3;i++)
	{
	if(L[i].searchBooks_byAuth(keyAuth)==1)
	{
	cout<<"Book found"<<endl;
	L[i].printBooks();
	}
	}
	if(i==3)
	cout<<"Book is not available";

	L[0].sort_byBook(L);
	cout<<endl<<"sorted list is :" <<endl;
	for(i=0;i<3;i++)
        L[i].printBooks();
}


