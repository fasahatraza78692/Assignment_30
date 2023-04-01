#include<iostream>
using namespace std;
int main()
{
	char pin[7];
	int count=0;
	cout<<"Enter Pincode :";
	cin>>pin;
	try{
		 for(int i=0;i<7;i++)
		  {
		  	if(pin[i]>='0'&&pin[i]<='9')
		  	   count++;
		  }
		if(count!=6)
		 throw 0;
		else
		 cout<<"valid area Pincode";
	}
	catch(...)
	{
		cout<<"Pincode doesn't contain 6 digits";
	}
	return 0;
}
