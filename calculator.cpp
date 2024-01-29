#include<iostream>
using namespace std;
int main()
{

int num1,num2;
       
char x;
while(true)
{
	



cout<<"Enter number one"<<endl;
cin>>num1;
cout<<"Enter number two"<<endl;
cin>>num2;

cout<<"press a for addtion"<<endl;
cout<<"press b for substraction"<<endl;
cout<<"press c for multipication"<<endl;
cout<<"press d for division"<<endl;

cin>>x;

if(x== 'a')
{

cout<<"the sum="<<num1+num2<<endl;
}
else if(x=='b')
{

cout<<"the substraction ="<<num1-num2<<endl;
}
else if(x== 'c')
{

cout<<"the multipication="<<num1*num2<<endl;
}
else if(x== 'd')
{

cout<<"the division="<<num1 /num2<<endl;
}
else if(x== 'e')
cout<<"the remainder="<<num1 % num2<<endl;

else
cout<<"invalid operation"<<endl;

}
}
