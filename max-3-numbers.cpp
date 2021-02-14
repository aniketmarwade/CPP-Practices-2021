#include<iostream>
using namespace std;

int main()
{
	 int a,b,c;
	 cout<<"Enter the numbers one by one:- ";
	 
	 cout<<"First Number";
	 cin>>a;
	 
	 cout<<"Second Number";
	 cin>>b;
	 
	 cout<<"Third Number";
	 cin>>c;
	 
	 
	 if(a>b){
	 	if(a>c){
		 cout<< a<<" is Largest\n";
		 }
	 }
else if(b>c){
  cout<<b<<"is Largest\n";
}
else
cout<<c<<"is Largest";

return 0;
}
