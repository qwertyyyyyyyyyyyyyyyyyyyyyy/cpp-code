#include <iostream>

using namespace std;

int main(void)
{
	int age;
	cout<<"give me your REAL age"<<endl;
	cin>>age;
	if (!(age >= 18)) cout<<"YOU ARE NOT ALLOWED TO DRIVE THE CAR!"<<endl;
	else cout<<"what car do you what to drive"<<endl;
	return 0;
}