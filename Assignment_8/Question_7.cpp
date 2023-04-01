#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int count=0,flag=0;
	char uname[15];
	cout<<"Enter username :";
	cin>>uname;
	try{
		 for(int i=0;i<strlen(uname);i++) 
		  {
		  	if(!(uname[i]>='a'&&uname[i]<='z'))
		  	  {
		  	  	flag=1;
		  	  	break;
			  }
		  	count++;
		  }
		if(flag==1||count<6)
		   throw 1;
		else if(count>=6)
		   throw 0;
	}
	catch(int x)
	 {
	 	if(x==1)
	 	 cout<<"Invalid username";
	 	if(x==0)
	 	cout<<"Valid username";
	 }
	return 0;
}
