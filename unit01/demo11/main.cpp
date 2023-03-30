#include<iostream>

using namespace std;
/*a b c d*/

int main(void)
{
	int a, b, c, d;
	double average;
	cout<<"give me four numbers:";
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	average = (double)(a+b+c+d)/4;
	cout<<"the average of these number is"<<average<<endl;

	return 0;
}