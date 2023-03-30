#include <iostream>
void swap1(int, int);
void swap2(int*, int*);
void swap3(int&, int&);

int main(void)
{
	int x = 10, y = 20;
	swap1(x, y);
	std::cout<<x<<"\t"<<y<<std::endl;
	swap2(&x,&y);
	std::cout<<x<<"\t"<<y<<std::endl;
	int& a = x;
	int& b = y;
	std::cout<<a<<std::endl;
	std::cout<<x<<std::endl;
	std::cout<<b<<std::endl;
	std::cout<<y<<std::endl;
	swap3(x, y);
	std::cout<<x<<"\t"<<y<<std::endl;
	swap3(a,b);
	std::cout<<x<<"\t"<<y<<std::endl;
	return 0;
}

void swap1(int x, int y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}
void swap2(int* a, int* b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void swap3(int& a, int& b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}