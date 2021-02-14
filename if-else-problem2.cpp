//write a program to output wether a number is divisible by both 2 and 3 or divisible by only one of them

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter a number\n";
	cin>>n;
	
	if(n%2==0 && n%3==0)
    {
    	cout<<"Divisible by 2 & 3\n";
	}
	else if(n%3==0)
	{
		cout<<"Divisible by 3\n";
	}
   else if(n%2==0)
   {
   	 cout<<"Divisible by 2\n";
   }
   else
   cout<<"Divisible by none";
return 0;
}
