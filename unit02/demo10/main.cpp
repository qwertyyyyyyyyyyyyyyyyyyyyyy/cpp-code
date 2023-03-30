#include <iostream>

using namespace std;

int main(void)
{
	int i, total;
	total = 0;
	for(i=1; i<100; i++)
	{
		total += i;
	}
	cout<<total<<endl;
	return 0;
}