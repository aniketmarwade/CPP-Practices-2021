// check wether the number entered is prime or not
//by aniket marwade

#include<iostream>
using namespace std;

int main()
{
	int ctr,i,num;
	
	cout<<"Enter the number to check it is prime or not:- \n";
	cin>>num;
	
	for(i=1;i<=num;i++){    //loop 1,2,3,4,5....
		
		if(num%i==0)   // it means it is completly disible by i=1,2,3...
		{
			ctr++;  // counts in how many counts it gets completely divided 
		}
	}
	if (ctr== 2) //if it gets divided in 2 counts 
	{
		cout<<"The number is Prime Number";
	}
	else
	cout<<"The number is not prime";

 return 0;
}
