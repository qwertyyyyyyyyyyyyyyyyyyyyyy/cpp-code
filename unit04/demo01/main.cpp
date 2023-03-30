#include <iostream>
#define SIZE 5

int main(void)
{
	int size = 5;
	size = 10;
	std::cout<<"Value of SIZE(macro)"<<SIZE<<std::endl;
	std::cout<<"Value of size(variable)"<<size<<std::endl;
	const long long id = 123456789;
	//id = 987654321;
	std::cout<<"Valueof id is "<<id<<std::endl;
	//SIZE = 10;


	return 0;
}