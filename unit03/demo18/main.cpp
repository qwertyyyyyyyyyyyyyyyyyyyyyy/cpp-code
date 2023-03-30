#include <iostream>

void reset(int);

int main(void)
{
	int a = 100;
	reset(a);
	std::cout<<a<<std::endl;

	return 0;
}

void reset(int x)
{
	x = 0;
}