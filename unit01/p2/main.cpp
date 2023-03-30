#include<iostream>

using namespace std;

int main(void)
{
	int age, balence
	age = 25;
	balence = 300;
	age++, balence--;
	age++, balence--;
	++age, --balence;
	++age, --balence;
	++age, --balence;

	cout<<balence*365<<endl;
	return 0;
}