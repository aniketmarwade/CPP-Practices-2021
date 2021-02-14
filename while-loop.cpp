//take the input from the user utill he gives +ve number when he gives -ve number terminate the program.
//code by aniket marwade.

#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"Enter the number:-";
	
	cin>>a;
	
	while(a>0)
	{
		cout<<a;
		cin>>a;
	}
	return 0;
}
