#include <iostream>
#define SIZE 5

int main(void)
{
	int size = 5;
	std::cout<<"Value of SIZE(macro)"<<SIZE<<std::endl;
	std::cout<<"Value of size(variable)"<<size<<std::endl;
	const long long id = 123456789;
	std::cout<<"Valueof id is "<<id<<std::endl;
	
	
	return 0;
}