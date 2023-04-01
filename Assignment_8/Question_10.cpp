#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char nikname[20];
	int count=0,digit=0,spchar=0,space=0;
	cout<<"Enter Nikname :";
	cin>>nikname;
	try{
		 for(int i=0;i<strlen(nikname);i++)
		  {
		  	if((nikname[i]>='a'&&nikname[i]<='z')||(nikname[i]>='A'&&nikname[i]<='Z'))
		  	    count++;
		  	else if(nikname[i]>='0'&&nikname[i]<='9')
		   	           digit++;
		        	else if(nikname[i]==' ')
		        	         space++;
		        	      else
		   	                 spchar++;
		  }
		if(count>8||digit||spchar||space)
		  throw 1;
		else
		  cout<<"valid Nikname";
	}
	catch(...)
	{
		cout<<"Invalid Nikname";
	}
	return 0;
}
