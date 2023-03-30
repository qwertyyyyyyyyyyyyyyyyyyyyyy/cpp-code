#include<iostream>

using namespace std;

int main(void)
{
	int money;
	int pear, peach, apple;
	const int priceA = 500;
	const int priceB = 600;
	const int priceC = 700;
	cout<<"how much do you what to donate?"<<endl;
	cin>>money;
	if(money <= 100000) pear = money / priceA;
	else
	{
		pear = money * 30/100 / 500;
		peach = money * 50/100 / 600;
		apple = money * 20/100 / 700;
	}
	cout<<"the amount of pear tree is "<<pear<<endl;
	cout<<"the amount of peach is "<<peach<<endl;
	cout<<"the amount of apple is "<<apple<<endl;

	return 0;
}