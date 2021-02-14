//Write a program to write a simple calculator.
//code by aniket marwade
#include<iostream>
using namespace std;

int main()
{
	int n1,n2;
	char op;
	
	cout<<"Enter the two numbers\n";
	cin>>n1>>n2;
	
	cout<<"Enter Operand\n";
	cin>>op;
	
	switch(op)
	{
		case'+':
			cout<<n1+n2<<endl;
			break;
											 
		case'-':
			cout<<n1-n2<<endl;
			break;
			
		case'*':
           cout<<n1*n2<<endl;
           break;
           
        case'/':
        	cout<<n1*n2<<endl;
        	break;
        	
        case'%':
        	cout<<n1%n2<<endl;
        	break;
        	
        	default:
        		cout<<"operand not found\n";
        		break;
	}
	return 0;
}
