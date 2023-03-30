#include <iostream>
#include <bitset>

using namespace std;

int main(void)
{
	int a = 13; // 1 1 0 1
	int b = 11; // 1 0 1 1
	cout<<a<<"&"<<b<<" = "<<(a&b)<<endl;
	cout<<a<<"|"<<b<<" = "<<(a|b)<<endl;
	cout<<a<<"^"<<b<<" = "<<(a^b)<<endl;
	char num = 15;
	cout<<"Binary num:"<<bitset<8>(num)<<endl;
	cout<<"Binary num:"<<bitset<8>(~num)<<endl;
	cout<<"left shift 3 digits:"<<bitset<8>(num<<3)<<endl;
	cout<<"left shift 3 digits"<<(num<<3)<<endl;
	cout<<"right shift 2 digits:"<<bitset<8>(num>>2)<<endl;
	cout<<"right shift 2 digits"<<(num>>2)<<endl;
	return 0;
}