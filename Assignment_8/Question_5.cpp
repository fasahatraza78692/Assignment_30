#include<iostream>
using namespace std;
int main()
{
	char ph[11];
	int count=0;
	cout<<"Enter your phone number :";
	cin>>ph;
	try{
		 for(int i=0;i<11;i++)
		  {
		  	if(ph[i]>='0'&&ph[i]<='9')
		  	   count++;
		  }
		if(count!=10)
		 throw 0;
		else
		 cout<<"valid number";
	}
	catch(...)
	{
		cout<<"Number doesn't contain 10 digits";
	}
	return 0;
}
