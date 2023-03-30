#include<iostream>

using namespace std;

int main(void)
{
	int d1,d2,h1,h2,m1,m2,s1,s2, result;
	cout<<"give me a time for Jack(day hour minutes second):";
	cin>>d1>>h1>>m1>>s1;
	cout<<"give me a time for John(day hour minutes second):";
	cin>>d2>>h2>>m2>>s2;
	result = (d1-d2)*24*60*60 + (h1-h2)*60*60 + (m1-m2)*60 +(s1-s2);
	cout<<"the result is"<<result<<endl;

	return 0;
}