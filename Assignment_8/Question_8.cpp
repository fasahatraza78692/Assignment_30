#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char password[20];
	int count=0,capital=0,digit=0,spchar=0;
	cout<<"Enter password :";
	cin>>password;
	try{
		  for(int i=0;i<strlen(password);i++)
		   {
		   	 if(password[i]>='A'&&password[i]<='Z')
		   	     capital++;
		   	 else if(password[i]>='0'&&password[i]<='9')
		   	           digit++;
		   	        else if(!(password[i]>='a'&&password[i]<='z'))
		   	               spchar++;
		   	 count++;
		   }
		if(!(count>=6&&spchar&&capital&&digit))
		 throw 1;
		else
		  cout<<"valid password";
	}
	catch(...)
	{
		cout<<"Invalid password";
	}
	
	return 0;
}
