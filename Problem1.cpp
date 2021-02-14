//A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
// code by aniket marwade!!
# include<iostream>
using namespace std;

int main()
{
	int quantity,cost,price;
	cout<<"Enter Quantity\n";
	cin>>quantity;
	cout<<"Enter Cost\n";
	cin>>cost;
	price=quantity*cost;
	
	if(price>=1000){
		
		cout<<"Congratulations you got discount!!!\n";
		cout<<"Your orignal cost is:- "<<price<<endl;
		cout<<"The new discount cost is:"<<price-(price*0.1);
	}
	else 
	cout<<"The total cost is:"<<price;

    return 0;
}
