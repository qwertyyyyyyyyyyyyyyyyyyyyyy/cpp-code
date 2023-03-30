#include<iostream>

using namespace std;

int main(void)
{
	int num1, num2;
	char op;
	cin>>num1>>num2>>op;
	switch(op)
	{
		case'+': cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl; break;
		case'-': cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl; break;
		case'*': cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl; break;
		case '/':
			{
				if (num2 != 0) cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
				else cout<<"Divided by 0"<<endl;
			}
			break;
		default: cout<<"Invalid input"<<endl;
	}
	return 0;
}