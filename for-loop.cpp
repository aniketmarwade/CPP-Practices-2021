//Take the sum from user and print the sum of numbers upto it.
//code by aniket marwade

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number:";
	cin>>n;
	
	int sum=0;
	
	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<sum<<endl;
	return 0;
}
