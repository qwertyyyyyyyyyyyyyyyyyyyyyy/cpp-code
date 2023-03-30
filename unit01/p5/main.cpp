#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(void)
{
	int x, y, result;
	srand(time(0));
	x = rand()% 10+1;
	y = rand()% 10+1;
	cout<<"what is the sum of this culculation?"<<endl;
	cout<<x<<"+"<<y<<"=?"<<endl;
	cin>>result;
	cout<<"Answer = "<<x+y<<endl;
	return 0;
}