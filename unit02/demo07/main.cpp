#include<iostream>

using namespace std;

int main(void)
{
	int num1, num2;
	int op;
	cin>>num1>>num2>>op;
	if(op == '+') cout<<num1<<"+"<<num2<<" = "<<num1+num2<<endl;
	else if(op == '-') cout<<num1<<"-"<<num2<<" = "<<num1-num2<<endl;
	else if(op == '*') cout<<num1<<"*"<<num2<<" = "<<num1*num2<<endl;	
	else if(op == '/')
	{
		if (num2 != 0) cout<<num1<<" / "<<num2<<" = "<<num1/num2;
		else cout<<"Divided zero"<<endl;
	}
	else cout<<"Invalid input"<<endl;

	return 0;
}