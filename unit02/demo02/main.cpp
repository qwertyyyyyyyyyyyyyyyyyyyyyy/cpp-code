#include<iostream>

using namespace std;

int main(void)
{
	char p1, p2;
	int gift;
	cout<<"give me your letter"<<endl;
	cin>> p1>>p2;
	if((p1=='A' && p2=='B') || (p1=='B' && p2=='A'))gift=2;
	else if (p1=='c' && p2=='c')gift=0;
	else gift=1;
	cout<<gift<<endl;
	return 0;
}