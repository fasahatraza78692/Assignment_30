#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char mail[20];
	int flag=1;
	cout<<"Enter your e-mail id : ";
	cin>>mail;
	try{
		  for(int i=0;i<strlen(mail);i++)
		   {
		   	 if(mail[i]=='@')
		   	  {
		   	  	flag=0;
		   	  	break;
			  }
		   }
		if(flag)
		 throw 1;
		else
		  cout<<"valid email";
	}
	catch(...)
    {
    	cout<<"E-mail does not contain @ symbol";
	}
	return 0;
}
