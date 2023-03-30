#include<iostream>

using namespace std;

int main(void)
{
	double height, price;
	cout<<"in put your height:";
	cin>>height;
	if (height > 1.2) price=2;
	else price=0;
	cout<<"you need to spend "<<price<< " lei" <<endl;

	return 0;
}