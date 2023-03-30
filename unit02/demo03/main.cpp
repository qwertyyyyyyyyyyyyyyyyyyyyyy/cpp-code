#include <iostream>

using namespace std;

int main(void)
{
	char p1, p2;
	cout<<"pls give me your gender:"<<endl;
	cin>>p1>>p2;
	if (p1=='M' && p2=='M') cout<<"you can go and put the football in the classroom."<<endl;
	else cout<<"you are not allowed to do it."<<endl;
	return 0;
}