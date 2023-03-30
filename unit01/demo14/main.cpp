#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(void)
{
	srand(time(0));
	int x = rand() % 101 + 100;
	cout<<"the random number between 100 anc 200 is "<<x<<endl;
	return 0;
}