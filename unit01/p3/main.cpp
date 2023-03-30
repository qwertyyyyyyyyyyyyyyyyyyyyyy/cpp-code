#include<iostream>

using namespace std;

int main(void)
{
	int money, robux;
	money = 100;
	robux = 150;
	--money, ++robux;
	--money, ++robux;
	--money, ++robux;
	--money, ++robux;
	--money, ++robux;

	cout<<money<<"$"<<endl;
	cout<<robux<<"R"<<endl;

	return 0;
}