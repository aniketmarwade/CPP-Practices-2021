#include<iostream>
using namespace std;

int main()
{
	int i,num,fact=1;
	
	cout<<"Enter the number to get its factorial";
	cin>>num;
	
	for(i=1;i<=num;i++)
	{

		fact=fact*i;
	}
	
	cout<<"The factorial for the number "<<num<<" is:- "<<fact;
	return 0;
}
