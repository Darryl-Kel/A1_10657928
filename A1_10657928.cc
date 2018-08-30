#include<iostream>
using namespace std;
int main()
{
	int number,i,count=0;
	cout<<"Enter number to check if its a prime or not"<<endl;
	cin>>number;
	if (number==0)
	{
		cout<<number<<"is not a prime"<<endl;
		exit(1);
	}
	else
	{
		for(i=2; i<number;i++)
		if(number% i==0)
		count++;
	}
	if (count>1)
	   cout<<number<<"is not a prime"<<endl;
	else
	    cout<<number<<"is a prime"<<endl;
	    
	return 0;    
}