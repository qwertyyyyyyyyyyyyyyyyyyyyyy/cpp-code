#include <iostream>

using namespace std;

int main(void)
{
	double weight, cost;
	cout<<"how much weight dose your package have:";
	cin>>weight;
	if (weight > 50) cost=(weight-50)*4 + 50*3;
	else cost=weight*3;
	cout<<"you shoud pay "<<cost<<" RMB"<<endl;

	return 0;
}