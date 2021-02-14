//print the number which are not divisible by 3 in 1 to 100
//code by aniket marwade

#include<iostream>
using namespace std;

int main()
{
	for(int i=0;i<100;i++)
	{
		if(i%3==0){
			continue;
		}
		cout<<i<<endl;
	}
return 0;
}
