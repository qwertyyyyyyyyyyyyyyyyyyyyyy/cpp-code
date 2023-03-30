#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(void)
{
	int x, y, z, result;
	srand(time(0));
	x = rand()% 1000+1;
	y = rand()% 1000+1;
	z = rand()% 1000+1;
	cout<<"if you want to login into my wed you need to tell me"<<endl;
	cout<<x<<"+"<<y<<"x"<<z<<"=?"<<endl;
	cin>>result;
	cout<<"Answer = "<<x+y*z<<endl;

	return 0;
}