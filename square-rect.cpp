#include<iostream>
using namespace std;

int main()
{
	int length,breadth;
	cout<<"Enter length:- \n";
	cin>>length;
	
	cout<<"Enter breadth:- \n";
	cin>>breadth;
	
	if(length==breadth){
		cout<<"It is square\n";
	}
	else
	cout<<"It is rectangle\n";
	
	return 0;
}
