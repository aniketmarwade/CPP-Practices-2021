//to find sum of first 10 integers

#include<iostream>
using namespace std;

int main()
{
	int i;
	int sum=0;
	cout<<"The Sum of first 10 integers are:-\n";

    for(i=1;i<=10;i++)
    {
    	cout<<i<<" ";
	    sum=sum+i;
	}
	cout<<"The sum of first 10 int are:- \n"<<sum<<endl;

}
