#include<iostream>
using namespace std;
int main()
{
	int x,y;
	char op;
	cout<<"Enter 1st number   : ";
	cin>>x;
	try{
	    	cout<<"Enter the operator : ";
	        cin>>op;
	        if(op!='+'&&op!='-'&&op!='*'&&op!='/')
	            throw op;
	        else
	         {
	         	cout<<"Enter 2nd number   : ";
            	cin>>y;
            	try{
            		  if(y==0)
            		    throw y; 
					  else
					  {
					  	 switch(op)
					  	  {
					  	  	 case'+':
					  	  	 	cout<<"Result = "<<x+y;
					  	  	 	break;
					  	  	case'-':
					  	  	 	cout<<"Result = "<<x-y;
					  	  	 	break;
					  	  	case'*':
					  	  	 	cout<<"Result = "<<x*y;
					  	  	 	break;
					  	  	case'/':
					  	  	 	cout<<"Result = "<<x/y;
					  	  	 	break; 	
						  }
					  }     
					}
				catch(int a)
		        {
		        	cout<<"Error: dividend is "<<y;
				}
			 }
	}
	catch(char c)
	{
		cout<<"Bad operator "<<c;
	}
	
	return 0;
}
