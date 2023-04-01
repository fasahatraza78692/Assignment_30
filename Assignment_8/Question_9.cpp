#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string mail;
	cout<<"Enter email id : ";
	getline(cin,mail);
	
    try{
    	 	if(mail.substr(mail.find("@"),10)=="@gmail.com")
	            cout<<"Valid email";
	        else
	            throw 1;
	}
	catch(...)
	{
		cout<<"Invalid email";
	}
	return 0;
}
