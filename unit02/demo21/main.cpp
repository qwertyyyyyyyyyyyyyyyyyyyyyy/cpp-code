#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(void)
{
	int x;
	srand(time(0));
	x = rand() % 1000+1;
	cout<<"the random number between 1 and 1000 is"<< x<<endl;
	
	char ch = 'a';
	short num0 = 100;
	int num1 = 10;
	unsigned int num2 = 5000;
	long long num3 = 100000000;
	float f1 = 3.14;
	double f2 = 3.1415926;

	cout<<"num1 ++ ==>"<<num1++ <<endl;
	cout<<num1<<endl;
	cout<<"++ num2 ==>"<<++num2<<endl;
	cout<<num2<<endl;

	cout<<ch<<endl;
	cout<<sizeof(ch)<<endl;
	cout<<&num0<<endl;
	cout<<(int) ch<<endl;

	return 0;
}