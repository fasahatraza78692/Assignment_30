#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Inpit : ";
	cin>>x;
	char *c="String or may be a special character or two digit number";
	try{
		 if(x>=0&&x<=9)
		   throw x;
		 else
		   throw c;
	}
	catch(int z)
	 {
	 	cout<<z<<" is a single number"<<endl;
	 }
	catch(char ch[50])
	 {
	 	cout<<ch;
	 }
	return 0;
}
