#include<iostream>
using namespace std;

int main()
{
	int savings;
	cout<<"How much savings do you have";
	cin>>savings;
	
	if (savings>5000)
	{
		if(savings>10000)
		{
			cout<<"Road trip with neha\n";
		}
		else
		
			cout<<"Shopping with neha\n";
	}
		else if(savings>2000)
		{
			cout<<"Go out with rashmi\n";
		}
		else
			cout<<"Go out with firends\n";
		
	return 0;
	}
