#include <iostream>
#include <bitset>
using namespace std;

int main(void)
{
	int a = 13;
	int b = 11;
	cout<<"denary a:"<<a<<endl;
	cout<<"denary b:"<<b<<endl;
	cout<<"Binary a:"<<bitset<8>(a)<<endl;
	cout<<"Binary b:"<<bitset<8>(b)<<endl;
	cout<<"Hex decimal;"<<hex<<a<<endl;
	cout<<"Hex decimal:"<<hex<<b<<endl;
	return 0;
}