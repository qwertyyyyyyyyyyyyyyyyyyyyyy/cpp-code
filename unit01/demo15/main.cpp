#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
	double x,y,z,n;
	double result;
	cout<<"give me three base number and the power number: "<<endl;
	cin>>x>>y>>z>>n;
	result = pow(x,n) + pow(y,n) + pow(z,n);
	cout<<"The result is "<<result<<endl;
	return 0;
}