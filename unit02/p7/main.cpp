#include<iostream>

using namespace std;

int main(void)
{
	int cup;
	double costA, costB;
	const double price = 3.0;
	cout<<"how many student needs a cup?"<<endl;
	cin>>cup;

	costA = price * cup * 0.88;
	costB = (cup - cup/9) * price;

	if (costA > costB) cout<<"it is better for you to buy from the 2nd store"<<endl;
	else cout<<"it is better for you to buy from the first store"<<endl;

	cout<<"cost 1:"<<costA<<endl;
	cout<<"cost 2:"<<costB<<endl;
}