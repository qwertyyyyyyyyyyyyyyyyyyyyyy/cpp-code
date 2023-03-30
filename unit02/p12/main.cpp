#include <iostream>
#include <bitset>

using namespace std;

int main(void)
{
	//int num = 01001110;
	int north, east, south, west, result;
	north = 0b01010;
	east = 0b11111;
	south = 0b10100;
	west = 0b00001;
	result = 0b01110
	cout<<bitset<5>(north^result)<<endl;
	cout<<bitset<5>(east^result)<<endl;
	cout<<bitset<5>(south^result)<<endl;
	cout<<bitset<5>(west^result)<<endl;

	return 0;
}