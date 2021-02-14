// print inverted pyramid

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"How many rows do you need in pyramid\n";
	
	cin>>n;
	
	for(int i=n;i>=1;i--)
	{
		for( int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
return 0;
}
