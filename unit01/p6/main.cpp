#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
	int n, m;
	int result;
	cout<<"give me two nuumbers but the frist one needs to be bigger then the sconed one:"<<endl;
	cin>>n>>m;
	result = pow(n,2) / pow(m,2);
	cout<<"the result is "<<result<<endl;
	return 0;
}