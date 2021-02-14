//Write a program in C++ to display n terms of natural number and their sum.

#include<iostream>
using namespace std;

int main()
{
	int i,n,sum;
	
	cout<<"Enter a number:-\n";
	cin>>n;
	cout<<"The natural numbers upto "<<n<<"th terms are:-\n";
	
	for(i=1;i<=n;i++)
	{
		cout<<i<<endl;
		sum=sum+i;
	  }  
	  cout<<"The sum of natural nos upto"<<n<<"is:- \n"<<sum;
	  return 0;
}
