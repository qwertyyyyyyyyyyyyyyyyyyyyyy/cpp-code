#include <iostream>

using namespace std;

int main(void)
{
	int age, price;
	cout<<"give me your age"<<endl;
	cin>>age;
	if(age<=7 || age>=70) price=0;
	else price=5;
	cout<<"the price you need to pay is "<<price<<endl;
	return 0;
}