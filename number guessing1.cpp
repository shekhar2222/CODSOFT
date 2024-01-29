#include<iostream>
using namespace std;
int main()
{
	int n;
	int x=78, count=0;
	cout<<"guess a number b/w 1 and 78:";
	for(int i=1; i<10; i++)
	{
		cin>>n;
		count=i;
		if(n<x) cout<<"guess a greater number:";
		else if(n>x) cout<<"guess a smaller number :";
		else cout<<"you are correct";
		if(n==x)
		 break;
		
	}
	cout<<endl<<"you took"<<count<<"chance";
}
